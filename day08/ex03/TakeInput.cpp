// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TakeInput.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:47 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Take.hpp"

Take::Take( std::string ) : { }
Take::Take( void ) { }
Take::Take( Take const & cp) { *this = cp; }
Take::~Take( void ) { }
Take& Take::operator=( Take const &) { return *this; }
