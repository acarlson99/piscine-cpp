// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 20:15:39 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 14:16:01 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <vector>
#include <array>
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
	std::array<int, 51> arr;
	for (int i = 0; i < 50; i++)
		arr[i] = i;
	std::array<int, 5001> a2;
	for (int i = 0; i < 5000; i++)
		a2[i] = i;
	std::cout << easyfind(a2, a) << std::endl;
	a2[42] = 41;

	std::cout << easyfind(v, a) << std::endl;
	std::cout << easyfind(j, a) << std::endl;
	std::cout << easyfind(arr, a) << std::endl;
	std::cout << easyfind(a2, a) << std::endl;
}
