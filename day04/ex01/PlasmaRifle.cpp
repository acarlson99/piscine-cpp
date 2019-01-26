// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 14:32:42 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 16:26:03 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle( std::string &name, int apcost, int damage ) : AWeapon(name, apcost, damage)
{
	(void)name;
	(void)apcost;
	(void)damage;
	// (void)name;
	// _apcost = apcost;
	// _damage = damage;
}

PlasmaRifle::PlasmaRifle( void ) { }
PlasmaRifle::PlasmaRifle( PlasmaRifle const & cp) { *this = cp; }
PlasmaRifle::~PlasmaRifle( void ) { }
PlasmaRifle& PlasmaRifle::operator=( PlasmaRifle const &) { return *this; }

void		PlasmaRifle::attack() const
{
}
