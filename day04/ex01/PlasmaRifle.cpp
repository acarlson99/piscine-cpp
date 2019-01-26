// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 14:32:42 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 19:32:14 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PlasmaRifle.hpp"

std::string		PlasmaRifle::_dname = std::string("PlasmaRifle");

PlasmaRifle::PlasmaRifle( void ) : AWeapon(_dname, 5, 21) { }

PlasmaRifle::PlasmaRifle( PlasmaRifle const & cp) { *this = cp; }
PlasmaRifle::~PlasmaRifle( void ) { }
PlasmaRifle& PlasmaRifle::operator=( PlasmaRifle const &) { return *this; }

void		PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
