// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValInc.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:45 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ValInc.hpp"

ValInc::ValInc( std::string ) : { }
ValInc::ValInc( void ) { }
ValInc::ValInc( ValInc const & cp) { *this = cp; }
ValInc::~ValInc( void ) { }
ValInc& ValInc::operator=( ValInc const &) { return *this; }
