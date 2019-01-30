// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/29 21:27:02 by acarlson          #+#    #+#             //
//   Updated: 2019/01/29 22:07:33 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <random>
#include <iostream>

std::mt19937		mt_rand(time(0));

class Base {
public:
	virtual ~Base( void ) { }
};

class A : public Base { };
class B : public Base { };
class C : public Base { };

Base		*generate( void )
{
	int		r = mt_rand();
	if (r % 3 == 0)
	{
		std::cout << "Generating 'A'" << std::endl;
		return (new A());
	}
	else if (r % 3 == 1)
	{
		std::cout << "Generating 'B'" << std::endl;
		return (new B());
	}
	else
	{
		std::cout << "Generating 'C'" << std::endl;
		return (new C());
	}
}

void		identify_from_pointer( Base *p )
{
	A	*boyA = dynamic_cast<A *>(p);
	if (boyA != NULL)
		std::cout << "A" << std::endl;
	B	*boyB = dynamic_cast<B *>(p);
	if (boyB != NULL)
		std::cout << "B" << std::endl;
	C	*boyC = dynamic_cast<C *>(p);
	if (boyC != NULL)
		std::cout << "C" << std::endl;
}

void		identify_from_reference( Base &p)
{
	A	*boyA = dynamic_cast<A *>(&p);
	if (boyA != NULL)
		std::cout << "A" << std::endl;
	B	*boyB = dynamic_cast<B *>(&p);
	if (boyB != NULL)
		std::cout << "B" << std::endl;
	C	*boyC = dynamic_cast<C *>(&p);
	if (boyC != NULL)
		std::cout << "C" << std::endl;
}

int main()
{
	Base	*a = generate();
	identify_from_pointer(a);
	Base	*b = generate();
	identify_from_pointer(b);
	Base	*c = generate();
	identify_from_reference(*c);
	Base	*d = generate();
	identify_from_reference(*d);
}
