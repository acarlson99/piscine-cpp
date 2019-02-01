// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClosingBracket.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:19:50 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 14:04:51 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClosingBracket.hpp"

ClosingBracket::ClosingBracket( void )
{
	c = ']';
}

ClosingBracket::ClosingBracket( ClosingBracket const & cp) { *this = cp; }
ClosingBracket::~ClosingBracket( void ) { }
ClosingBracket& ClosingBracket::operator=( ClosingBracket const &) { return *this; }

void		ClosingBracket::execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&v, unsigned long *i, int *j)
{
	unsigned long		count = 1;

	if (tape[*j] == 0)
		return ;
	while (*i > 0 && count)
	{
		*i = *i - 1;
		if (v[*i]->getCh() == ']')
			++count;
		else if (v[*i]->getCh() == '[')
			--count;
	}
}

char		ClosingBracket::getCh( void ) const
{
	return (c);
}
