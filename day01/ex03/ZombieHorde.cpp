// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 13:54:23 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 09:43:02 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde( int n )
{
	if (n > 1000000)
		n = 1000000;
	_zomb_num = n;
	for (int i = 0; i < n; i++)
	{
		_zombs[i] = new Zombie;
	}
}

ZombieHorde::~ZombieHorde( void )
{
	for (int i = 0; i < _zomb_num; i++)
		delete _zombs[i];
}

void		ZombieHorde::announce( void ) const
{
	for (int i = 0; i < _zomb_num; i++)
		_zombs[i]->announce();
}
