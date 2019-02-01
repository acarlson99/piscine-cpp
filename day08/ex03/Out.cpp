// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Out.cpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:48 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:39:54 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Out.hpp"

Out::Out( void ) { }
Out::Out( Out const & cp) { *this = cp; }
Out::~Out( void ) { }
Out& Out::operator=( Out const &) { return *this; }

void	Out::execute(int tape[INT_MAX], std::vector<AInstruction *>&, unsigned long *i, int *)
{
	std::cout << tape[*i];
}

char		Out::getCh( void ) const
{
	return (c);
}
