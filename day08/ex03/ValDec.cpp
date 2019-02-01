// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValDec.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:46 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 11:08:13 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ValDec.hpp"

ValDec::ValDec( void ) { }
ValDec::ValDec( ValDec const & cp) { *this = cp; }
ValDec::~ValDec( void ) { }
ValDec& ValDec::operator=( ValDec const &) { return *this; }

void	ValDec::execute(int (&)[4096], std::vector<AInstruction *>&, unsigned long *, int *)
{
	std::cout << c;
}

char		ValDec::getCh( void ) const
{
	return (c);
}
