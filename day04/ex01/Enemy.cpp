// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 18:12:26 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 18:26:41 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

std::string		Enemy::_dtype = std::string("goblin");

Enemy::Enemy( int hp, std::string const &type ) : _HP(hp), _type(type)
{
}

Enemy::Enemy( void ) : _HP(10), _type(_dtype) { }
Enemy::Enemy( Enemy const & cp) : _type(cp._type) { *this = cp; }
Enemy::~Enemy( void ) { }
Enemy& Enemy::operator=( Enemy const &) { return *this; }

void		Enemy::deathMsg( void ) const
{
	std::cout << "Enemy " << _type << " is dead" << std::endl;
}

void		Enemy::takeDamage( int n )
{
	std::cout << "Enemy " << _type << " takes " << n << " damage" << std::endl;
	this->_HP -= n;
	if (this->_HP <= 0)
	{
		this->_HP = 0;
		deathMsg();
	}
}
