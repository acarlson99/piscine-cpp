// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 12:48:20 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 13:42:43 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"

Peon::Peon( std::string s ) : _name(s)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( void ) { }

Peon::Peon( Peon const & cp) { *this = cp; }

Peon::~Peon( void )
{
	std::cout << "Bleuark..." << std::endl;
}

Peon& Peon::operator=( Peon const &) { return *this; }

std::string const		&Peon::getName( void ) const
{
	return (_name);
}

void					Peon::getPolymorphed( void ) const
{
	std::cout << _name << " has been turned into a pink pony !" << std::endl;
}
