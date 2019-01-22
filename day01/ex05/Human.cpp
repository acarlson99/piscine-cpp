// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 14:56:53 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 15:34:15 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human( void )
{
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

std::string		Human::identify( void )
{
	return (this->getBrain().identify());
}

Brain&			Human::getBrain( void )
{
	return (this->_brain);
}
