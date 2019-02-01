// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValInc.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:45 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:40:27 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ValInc.hpp"

ValInc::ValInc( void ) { }
ValInc::ValInc( ValInc const & cp) { *this = cp; }
ValInc::~ValInc( void ) { }
ValInc& ValInc::operator=( ValInc const &) { return *this; }

void	ValInc::execute(int tape[INT_MAX], std::vector<AInstruction *>&, unsigned long *i, int *)
{
	++tape[*i];
	std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
}

char		ValInc::getCh( void ) const
{
	return (c);
}
