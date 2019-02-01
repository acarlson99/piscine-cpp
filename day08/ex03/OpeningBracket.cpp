// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OpeningBracket.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:49 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OpeningBracket.hpp"

OpeningBracket::OpeningBracket( std::string ) : { }
OpeningBracket::OpeningBracket( void ) { }
OpeningBracket::OpeningBracket( OpeningBracket const & cp) { *this = cp; }
OpeningBracket::~OpeningBracket( void ) { }
OpeningBracket& OpeningBracket::operator=( OpeningBracket const &) { return *this; }
