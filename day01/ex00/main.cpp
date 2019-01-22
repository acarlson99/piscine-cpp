// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 07:52:31 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 08:14:21 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.class.hpp"
#include <iostream>

int main()
{
	Pony *p1 = Pony::ponyOnTheHeap(21);
	Pony *p2 = Pony::ponyOnTheHeap(42);

	std::cout << p1->number << std::endl << p2->number << std::endl;
	delete p1;
	delete p2;
}
