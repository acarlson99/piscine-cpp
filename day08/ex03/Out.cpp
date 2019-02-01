// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Out.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:48 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Out.hpp"

Out::Out( std::string ) : { }
Out::Out( void ) { }
Out::Out( Out const & cp) { *this = cp; }
Out::~Out( void ) { }
Out& Out::operator=( Out const &) { return *this; }
