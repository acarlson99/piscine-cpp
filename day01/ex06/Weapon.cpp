// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 15:39:35 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 18:02:47 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon( std::string string )
{
	this->type = string;
}

Weapon::Weapon( void )
{
	this->type = "Rusty dagger";
}

Weapon::~Weapon( void )
{
}

void	Weapon::setType( std::string name )
{
	this->type = name;
}
