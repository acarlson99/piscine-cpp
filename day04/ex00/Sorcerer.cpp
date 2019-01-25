// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 11:38:58 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 12:13:18 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string name, std::string title ) : name(name), title(title)
{
	std::cout << *this << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( void ) { }
Sorcerer::Sorcerer( Sorcerer const & cp) { *this = cp; }
Sorcerer::~Sorcerer( void ) { }
Sorcerer& Sorcerer::operator=( Sorcerer const &) { return *this; }

std::string const	&Sorcerer::getName( void ) const
{
	return (this->name);
}

std::string const	&Sorcerer::getTitle( void ) const
{
	return (this->title);
}

std::ostream	&operator<<( std::ostream &o, Sorcerer const &f )
{
	o << f.getName() << ", " << f.getTitle();
	return (o);
}
