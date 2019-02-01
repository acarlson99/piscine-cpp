// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrDec.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:48 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 11:31:31 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PtrDec.hpp"

PtrDec::PtrDec( void ) { }
PtrDec::PtrDec( PtrDec const & cp) { *this = cp; }
PtrDec::~PtrDec( void ) { }
PtrDec& PtrDec::operator=( PtrDec const &) { return *this; }

void	PtrDec::execute(int (&)[4096], std::vector<AInstruction *>&, unsigned long *, int *j)
{
	if (*j > 0)
		*j = *j - 1;
}

char		PtrDec::getCh( void ) const
{
	return (c);
}
