// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 14:45:10 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 18:20:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int>	b = 10;
	// std::cout << "A" << std::endl;
	std::cout << "A" << std::endl;
	std::cout << b[3] << std::endl;
	Array<int>	x = b;
	std::cout << "A" << std::endl;
	b[3] = new int(12);
	std::cout << x[3] << std::endl;
	return (0);
}
