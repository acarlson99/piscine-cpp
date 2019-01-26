// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 13:41:57 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 19:32:31 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

std::string		AWeapon::_dname = std::string("peashooter");

AWeapon::AWeapon( std::string const &name, int apcost, int damage ) : _name(name), _apcost(apcost), _damage(damage) { }

AWeapon::AWeapon( void ) : _name(AWeapon::_dname), _apcost(10), _damage(10) { }

AWeapon::AWeapon( AWeapon const & cp) : _name(cp._name) { *this = cp; }
AWeapon::~AWeapon( void ) { }
AWeapon& AWeapon::operator=( AWeapon const &) { return *this; }

std::string const	&AWeapon::getName( void ) const
{
	return (_name);
}

int					AWeapon::getAPCost( void ) const
{
	return (_apcost);
}

int					AWeapon::getDamage( void ) const
{
	return (_damage);
}
