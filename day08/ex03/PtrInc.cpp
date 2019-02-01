// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrInc.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:47 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 22:00:36 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PtrInc.hpp"

PtrInc::PtrInc( void ) { }
PtrInc::PtrInc( PtrInc const & cp) { *this = cp; }
PtrInc::~PtrInc( void ) { }
PtrInc& PtrInc::operator=( PtrInc const &) { return *this; }
