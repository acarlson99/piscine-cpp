// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 12:26:28 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 13:25:54 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim( std::string s ) : _name(s)
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim( void ) : _name("Joe")
{
	std::cout << "Some random victim called " << _name << " just popped !" << std::endl;
}

Victim::Victim( Victim const & cp) { *this = cp; }

Victim::~Victim( void )
{
	std::cout << "Victim " << _name << " just died for no apparent reason !" << std::endl;
}

Victim& Victim::operator=( Victim const &) { return *this; }

std::string const		&Victim::getName( void ) const
{
	return (_name);
}

void					Victim::getPolymorphed( void ) const
{
	std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
}

std::ostream			&operator<<( std::ostream &o, Victim const &f )
{
	o << "I'm " << f.getName() << " and I like otters !" << std::endl;
	return (o);
}
