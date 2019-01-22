// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 09:53:48 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 12:50:33 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

std::string		ZombieEvent::_zombieType = "Default";

Zombie*		ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie(name);
	z->type = _zombieType;
	return (z);
}

Zombie*		ZombieEvent::newZombie( void )
{
	Zombie *z = new Zombie();
	z->type = _zombieType;
	return (z);
}

Zombie		*ZombieEvent::randomChump( void )
{
	Zombie *z = newZombie();
	z->announce();
	return (z);
}
