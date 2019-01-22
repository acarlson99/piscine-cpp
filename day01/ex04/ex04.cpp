// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 14:33:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 14:39:43 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int main()
{
	std::string		brain = "HI THIS IS BRAIN";
	std::string		*bptr = &brain;
	std::string&	bref = brain;

	std::cout << *bptr << std::endl;
	std::cout << bref << std::endl;
}
