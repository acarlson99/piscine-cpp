// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrInc.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:47 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 23:25:07 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PtrInc.hpp"

PtrInc::PtrInc( void ) { }
PtrInc::PtrInc( PtrInc const & cp) { *this = cp; }
PtrInc::~PtrInc( void ) { }
PtrInc& PtrInc::operator=( PtrInc const &) { return *this; }

void	PtrInc::execute(int[INT_MAX], std::vector<AInstruction>&, unsigned long *, int *)
{
	std::cout << c;
}
