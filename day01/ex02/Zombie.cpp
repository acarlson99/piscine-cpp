// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 09:52:06 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 13:00:03 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

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

Zombie::Zombie( std::string n )	// TODO: make this random
{
	std::srand(time(0));
	this->name = n;
	this->type = types[rand() % 5];
}

Zombie::Zombie( void )	// TODO: make this random
{
	std::srand(time(0));
	this->name = names[rand() % 10];
	this->type = types[rand() % 5];
}

Zombie::~Zombie( void )
{
}

void		Zombie::announce( void ) const
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiinssssssss..." << std::endl;
}
