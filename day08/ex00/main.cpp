// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 20:15:39 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 12:15:25 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include "easyfind.hpp"

int		main()
{
	int		a = 42;
	std::vector<int> v;
	for (int i = 0; i < 50; i++)
		v.push_back(i);
	std::vector<int> j;
	for (int i = 0; i < 20; i++)
		j.push_back(i);
	std::stack<int>s;
	for (int i = 0; i < 50; i++)
		s.push(i);
	std::queue<int>q;
	for (int i = 0; i < 50; i++)
		q.push(i);
	

	std::cout << easyfind(v, a) << std::endl;
	std::cout << easyfind(j, a) << std::endl;
	// std::cout << easyfind(s, a) << std::endl;
	// std::cout << easyfind(q, a) << std::endl;
}
