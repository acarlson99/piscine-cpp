// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 09:52:06 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 11:15:50 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include <random>

std::string		names[] = {
};

Zombie::Zombie( std::string n, std::string t )
{
	this->name = n;
	this->type = t;
}

Zombie::Zombie( std::string n )
{
	this->name = n;
	this->type = "Runner";
}

Zombie::Zombie( void )
{
	this->name = "Jimbo";
	this->type = "Runner";
}

Zombie::~Zombie( void )
{
}

void		Zombie::announce( void )
{
	std::cout << "<" << this->name << " (" << this->type << ")> Braiiiiiiiinssssssss..." << std::endl;
}
