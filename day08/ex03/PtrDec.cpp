// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrDec.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:48 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 22:00:36 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PtrDec.hpp"

PtrDec::PtrDec( void ) { }
PtrDec::PtrDec( PtrDec const & cp) { *this = cp; }
PtrDec::~PtrDec( void ) { }
PtrDec& PtrDec::operator=( PtrDec const &) { return *this; }
