// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 11:56:48 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 12:07:12 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template <class T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <class T>
T		min(T &a, T &b)
{
	return (a < b ? a : b);
}

template <class T>
T		max(T &a, T &b)
{
	return (a > b ? a : b);
}

int main()
{

	{
		int a = 2;
		int b = 3;
		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		int ai = 12;
		int bi = 42;
		std::cout << ai << " " << bi << std::endl;
		swap(ai, bi);
		std::cout << ai << " " << bi << std::endl;
		std::cout << "MIN: " << min(ai, bi) << std::endl;
		std::cout << "MAX: " << max(ai, bi) << std::endl;

		std::string as = "abc def ghi";
		std::string bs = "jkl mno pqr";
		std::cout << as << std::endl << bs << std::endl;
		swap(as, bs);
		std::cout << as << std::endl << bs << std::endl;
		std::cout << "MIN: " << min(as, bs) << std::endl;
		std::cout << "MAX: " << max(as, bs) << std::endl;
	}
}
