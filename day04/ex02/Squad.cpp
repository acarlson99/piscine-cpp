// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 20:55:27 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 21:26:09 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Squad.hpp"

Squad::Squad( void ) {
	_boynum = 0;
}
Squad::Squad( Squad const & cp) { *this = cp; }

Squad::~Squad( void ) {
	for (int i = 0; i < _boynum; i++)
		delete _marine_arr[i];
}

Squad& Squad::operator=( Squad const &) { return *this; }

int					Squad::getCount( void ) const
{
	return _boynum;
}

ISpaceMarine		*Squad::getUnit( int n ) const
{
	if (n < _boynum && n >= 0)
	{
		return (_marine_arr[n]);
		std::cout << "Return int " << _marine_arr[n] << std::endl;
	}
	std::cout << "Returning nullptr" << std::endl;
	return (nullptr);
}

int					Squad::push( ISpaceMarine *m )
{
	if (_boynum >= 4096)
		return (_boynum);
	_marine_arr[_boynum] = m;
	_boynum++;
	return (_boynum);
}
