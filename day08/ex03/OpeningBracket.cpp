// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OpeningBracket.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:49 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:38:28 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OpeningBracket.hpp"

OpeningBracket::OpeningBracket( void ) { }
OpeningBracket::OpeningBracket( OpeningBracket const & cp) { *this = cp; }
OpeningBracket::~OpeningBracket( void ) { }
OpeningBracket& OpeningBracket::operator=( OpeningBracket const &) { return *this; }

void	OpeningBracket::execute(int[INT_MAX], std::vector<AInstruction *> &v, unsigned long *i, int *)
{
	while (*i < v.size() && v[*i].getCh() != ']')
		*i = *i + 1;
}

char	OpeningBracket::getCh( void ) const
{
	return (c);
}
