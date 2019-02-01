// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TakeInput.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:47 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:40:41 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TakeInput.hpp"

TakeInput::TakeInput( void ) { }
TakeInput::TakeInput( TakeInput const & cp) { *this = cp; }
TakeInput::~TakeInput( void ) { }
TakeInput& TakeInput::operator=( TakeInput const &) { return *this; }

void	TakeInput::execute(int[INT_MAX], std::vector<AInstruction *>&, unsigned long *, int *)
{
	std::cout << c;
}

char		TakeInput::getCh( void ) const
{
	return (c);
}
