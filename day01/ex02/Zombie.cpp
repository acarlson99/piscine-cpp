// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 09:52:06 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 13:46:06 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

std::mt19937		mt_rand(time(0));

std::string		Zombie::names[10] = {
	"Jimothy",
	"Thomas",
	"Jonathan",
	"Jackson",
	"Grace",
	"Smith",
	"Weston",
	"Jackie",
	"Chuck",
	"Tim",
};

std::string		Zombie::types[5] = {
	"Default",
	"Speedy boi",
	"Chompy boi",
	"Strong boi",
	"Zoro",
};

Zombie::Zombie( std::string n, std::string t )
{
	this->name = n;
	this->type = t;
}

Zombie::Zombie( std::string n )
{
	this->name = n;
	this->type = types[mt_rand() % 5];
}

Zombie::Zombie( void )
{
	this->name = names[mt_rand() % 10];
	this->type = types[mt_rand() % 5];
}

Zombie::~Zombie( void )
{
	std::cout << this->name << " destroyed" << std::endl;
}

void		Zombie::announce( void ) const
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiinssssssss..." << std::endl;
}
