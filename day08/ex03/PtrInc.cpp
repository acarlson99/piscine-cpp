// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrInc.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:47 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 11:31:06 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PtrInc.hpp"

PtrInc::PtrInc( void ) { }
PtrInc::PtrInc( PtrInc const & cp) { *this = cp; }
PtrInc::~PtrInc( void ) { }
PtrInc& PtrInc::operator=( PtrInc const &) { return *this; }

void	PtrInc::execute(int (&)[4096], std::vector<AInstruction *>&, unsigned long *, int *j)
{
	if (*j < 4096)
		*j = *j + 1;
}

char		PtrInc::getCh( void ) const
{
	return (c);
}
