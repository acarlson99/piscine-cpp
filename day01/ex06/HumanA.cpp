// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 17:50:06 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 18:12:04 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::HumanA( std::string string, Weapon &weapon ) : name(string), weapon(weapon)
{
}

HumanA::~HumanA( void )
{
}

void		HumanA::attack( void ) const
{
	std::cout << name << " attacks with his " << weapon.type << std::endl;
}
