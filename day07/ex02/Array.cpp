// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 15:03:31 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 15:04:48 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"

Array::Array( unsigned int n ) : { }
Array::Array( void ) { }
Array::Array( Array const & cp) { *this = cp; }
Array::~Array( void ) { }
Array& Array::operator=( Array const &) { return *this; }
