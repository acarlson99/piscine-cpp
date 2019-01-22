// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.class.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 08:13:49 by acarlson          #+#    #+#             //
/*   Updated: 2019/01/22 08:40:40 by acarlson         ###   ########.fr       */
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

Pony		Pony::ponyOnTheStack( int n )
{
	return (Pony(n));
}
