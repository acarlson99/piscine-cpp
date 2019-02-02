// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/02/01 15:28:29 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 17:48:14 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.top() << std::endl;
		std::cout << mstack.bottom() << std::endl;
		std::cout << mstack.size() << std::endl;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::cout << "Copying stack" << std::endl;
		std::stack<int> s(mstack);
		MutantStack<int>::iterator it2 = mstack.begin();
		MutantStack<int>::iterator ite2 = mstack.end();
		++it2;
		--it2;
		while (it2 != ite2)
		{
			std::cout << *it2 << std::endl;
			++it2;
		}
	}
	return 0;
}
