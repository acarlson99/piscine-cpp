// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 08:43:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 12:59:58 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
	Zombie jim = Zombie("Jim");

	Zombie *z = ZombieEvent::randomChump();
	delete z;
	jim.announce();
}
