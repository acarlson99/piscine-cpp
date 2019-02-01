// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Out.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:48 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:56:50 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Out.hpp"

Out::Out( void ) { c = '.'; }
Out::Out( Out const & cp) { *this = cp; }
Out::~Out( void ) { }
Out& Out::operator=( Out const &) { return *this; }

void	Out::execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *j)
{
	std::cout << static_cast<char>(tape[*j]);
}

char		Out::getCh( void ) const
{
	return (c);
}
