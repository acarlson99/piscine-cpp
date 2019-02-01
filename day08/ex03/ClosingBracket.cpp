// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClosingBracket.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:19:50 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:39:45 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClosingBracket.hpp"

ClosingBracket::ClosingBracket( void ) { }
ClosingBracket::ClosingBracket( ClosingBracket const & cp) { *this = cp; }
ClosingBracket::~ClosingBracket( void ) { }
ClosingBracket& ClosingBracket::operator=( ClosingBracket const &) { return *this; }

void		ClosingBracket::execute(int[INT_MAX], std::vector<AInstruction *>&, unsigned long *, int *)
{
	std::cout << "]" << std::endl;
}

char		ClosingBracket::getCh( void ) const
{
	return (c);
}
