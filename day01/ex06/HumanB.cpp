// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 18:10:28 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 18:22:08 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB( std::string string ) : name(string)
{
}

HumanB::~HumanB( void )
{
}

void		HumanB::attack( void ) const
{
	std::cout << name << " attacks with his " << weapon->type << std::endl;
}

void		HumanB::setWeapon( Weapon &w )
{
	weapon = &w;
}
