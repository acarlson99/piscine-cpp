// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 08:43:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 10:54:02 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

int main()
{
	Zombie jim = Zombie();
	std::cout << jim.name << std::endl;
	jim.announce();
}
