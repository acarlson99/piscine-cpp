// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AInstruction.cpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 22:12:23 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 22:13:09 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AInstruction.hpp"

AInstruction::AInstruction( void ) { }
AInstruction::AInstruction( AInstruction const & cp) { *this = cp; }
AInstruction::~AInstruction( void ) { }
AInstruction& AInstruction::operator=( AInstruction const &cp)
{
	this->c = cp.c;
	return *this;
}
