// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValDec.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:46 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ValDec.hpp"

ValDec::ValDec( std::string ) : { }
ValDec::ValDec( void ) { }
ValDec::ValDec( ValDec const & cp) { *this = cp; }
ValDec::~ValDec( void ) { }
ValDec& ValDec::operator=( ValDec const &) { return *this; }
