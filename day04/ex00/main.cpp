// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 11:47:54 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 12:07:16 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

int main()
{
	Sorcerer jim = Sorcerer("Jim", "The woke af");
	std::cout << jim << std::endl;
	std::cout << "I compiled :)" << std::endl;
}
