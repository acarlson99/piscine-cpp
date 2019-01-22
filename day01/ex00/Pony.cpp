// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 07:41:41 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 07:52:18 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Pony::Pony( int n )
{
	number = n;
}

Pony::Pony( void )
{
	number = 42;
}
Pony::~Pony( void )
{
}

Pony		*Pony::ponyOnTheHeap( int n )
{
	return (new Pony(n));
}

Pony		*Pony::ponyOnTheStack( int n )
{
	return (new Pony(n));
}
