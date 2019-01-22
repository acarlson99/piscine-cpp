// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 14:56:53 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 15:06:29 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human( void )
{
	this->_brain = Brain();
	this->name = "Bob";
}

Human::Human( std::string name )
{
	this->_brain = Brain();
	this->name = name;
}

Human::~Human( void )
{
}

std::string		Human::identify( void ) const
{
	std::stringstream stream;

	stream << "0x" << std::hex << &this->_brain;
	return (stream.str());
}
