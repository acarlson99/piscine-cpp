// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 20:15:39 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 18:03:12 by acarlson         ###   ########.fr       //
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
		v.push_back(50 - i);
	std::vector<int> j;
	for (int i = 0; i < 20; i++)
		j.push_back(i);
	std::array<int, 50> arr;
	for (int i = 0; i < 50; i++)
		arr[i] = i;
	std::array<int, 5000> a2;
	for (int i = 0; i < 5000; i++)
		a2[i] = i;
	std::cout << easyfind(a2, a) << std::endl;
	a2[42] = 41;

	try {std::cout << easyfind(v, a) << std::endl;}
	catch (std::exception &cp) {std::cout << "Number not found" << std::endl;}
	try {std::cout << easyfind(j, a) << std::endl;}
	catch (std::exception &cp) {std::cout << "Number not found" << std::endl;}
	try {std::cout << easyfind(arr, a) << std::endl;}
	catch (std::exception &cp) {std::cout << "Number not found" << std::endl;}
	try {std::cout << easyfind(a2, a) << std::endl;}
	catch (std::exception &cp) {std::cout << "Number not found" << std::endl;}
}
