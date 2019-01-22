// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 14:46:07 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 15:15:46 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain( void )
{
}

Brain::~Brain( void )
{
}

std::string			Brain::identify( void ) const
{
	std::stringstream stream;

	stream << std::hex << this;
	return (stream.str());
}
