// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 13:41:57 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 13:42:20 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

AWeapon::AWeapon( std::string ) : { }
AWeapon::AWeapon( void ) { }
AWeapon::AWeapon( AWeapon const & cp) { *this = cp; }
AWeapon::~AWeapon( void ) { }
AWeapon& AWeapon::operator=( AWeapon const &) { return *this; }
