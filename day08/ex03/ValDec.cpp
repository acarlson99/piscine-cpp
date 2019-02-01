// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValDec.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:46 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:57:31 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ValDec.hpp"

ValDec::ValDec( void ) { c = '-'; }
ValDec::ValDec( ValDec const & cp) { *this = cp; }
ValDec::~ValDec( void ) { }
ValDec& ValDec::operator=( ValDec const &) { return *this; }

void	ValDec::execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *j)
{
	tape[*j] = tape[*j] - 1;
}

char		ValDec::getCh( void ) const
{
	return (c);
}
