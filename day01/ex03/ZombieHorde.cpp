// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 13:54:23 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 14:25:43 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n )
{
	for (int i = 0; i < n; i++)
	{
		_zombs.push_back(new Zombie);
	}
}

ZombieHorde::~ZombieHorde( void )
{
	for (unsigned long i = 0; i < _zombs.size(); i++)
		delete _zombs[i];
	_zombs.clear();
	_zombs.shrink_to_fit();
}

void		ZombieHorde::announce( void ) const
{
	for (unsigned long i = 0; i < _zombs.size(); i++)
		_zombs[i]->announce();
}
