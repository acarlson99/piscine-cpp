// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.class.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 08:13:49 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 09:58:10 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include "Pony.hpp"

Pony::Pony( int n )
{
	number = n;
	std::cout << "Pony " << this->number << " has been birthed" << std::endl;
}

Pony::Pony( void )
{
	number = 42;
	std::cout << "Pony " << this->number << " has been birthed" << std::endl;
}
Pony::~Pony( void )
{
	std::cout << "Pony " << this->number << " sent to the glue factory" << std::endl;
}

Pony		*Pony::ponyOnTheHeap( int n )
{
	return (new Pony(n));
}

Pony		Pony::ponyOnTheStack( int n )
{
	return (Pony(n));
}
