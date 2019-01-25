// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 11:38:58 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 13:07:25 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer( std::string name, std::string title ) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer( void ) { }
Sorcerer::Sorcerer( Sorcerer const & cp) { *this = cp; }

Sorcerer::~Sorcerer( void )
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}
Sorcerer& Sorcerer::operator=( Sorcerer const &) { return *this; }

std::string const	&Sorcerer::getName( void ) const
{
	return (this->_name);
}

std::string const	&Sorcerer::getTitle( void ) const
{
	return (this->_title);
}

void				Sorcerer::polymorph( Victim const &v ) const
{
	v.getPolymorphed();
}

std::ostream	&operator<<( std::ostream &o, Sorcerer const &f )
{
	o << "I am " << f.getName() << ", " << f.getTitle() << ", and I like ponies !" << std::endl;
	return (o);
}
