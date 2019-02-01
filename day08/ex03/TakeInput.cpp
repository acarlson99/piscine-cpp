// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TakeInput.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:47 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 22:00:36 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TakeInput.hpp"

TakeInput::TakeInput( void ) { }
TakeInput::TakeInput( TakeInput const & cp) { *this = cp; }
TakeInput::~TakeInput( void ) { }
TakeInput& TakeInput::operator=( TakeInput const &) { return *this; }
