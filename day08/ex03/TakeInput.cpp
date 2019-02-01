// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TakeInput.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:47 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:52:45 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "TakeInput.hpp"

TakeInput::TakeInput( void ) { }
TakeInput::TakeInput( TakeInput const & cp) { *this = cp; }
TakeInput::~TakeInput( void ) { }
TakeInput& TakeInput::operator=( TakeInput const &) { return *this; }

void	TakeInput::execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *j)
{
	char	tmp;

	std::cout << std::endl << "> ";
	std::cin >> tmp;
	tape[*j] = tmp;
}

char		TakeInput::getCh( void ) const
{
	return (c);
}
