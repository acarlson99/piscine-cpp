// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OpeningBracket.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:49 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 12:20:06 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "OpeningBracket.hpp"

OpeningBracket::OpeningBracket( void ) { }
OpeningBracket::OpeningBracket( OpeningBracket const & cp) { *this = cp; }
OpeningBracket::~OpeningBracket( void ) { }
OpeningBracket& OpeningBracket::operator=( OpeningBracket const &) { return *this; }

void	OpeningBracket::execute(int (&tape)[4096], std::vector<AInstruction *> &v, unsigned long *i, int *j)
{
	unsigned long		count = 0;
	
	if (tape[*j] != 0)
		return ;
	while (*i < v.size() && count && v[*i]->getCh() != ']')
	{
		*i = *i + 1;
		if (v[*i]->getCh() == ']')
			++count;
		else if (v[*i]->getCh() == '[')
			--count;
	}

	// while (*i < v.size() && v[*i]->getCh() != ']')
	// 	*i = *i + 1;
}

char	OpeningBracket::getCh( void ) const
{
	return (c);
}
