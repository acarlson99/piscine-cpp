// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/23 09:54:50 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 13:10:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( int n )
{
	_fpvalue = n << _fractionalBits;
}

Fixed::Fixed( float n )
{
	_fpvalue = std::roundf(n * (1 << _fractionalBits));
}

Fixed::Fixed( void )
{
	_fpvalue = 0;
}

Fixed::Fixed( Fixed const & cp)
{
	*this = cp;
}

Fixed::~Fixed( void )
{
}

int		Fixed::getRawBits( void ) const
{
	return (_fpvalue);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpvalue = raw;
}

int		Fixed::toInt( void ) const
{
	return _fpvalue >> _fractionalBits;
}

float	Fixed::toFloat( void ) const
{
	return ((double)_fpvalue / (1 << _fractionalBits));
}

Fixed	&Fixed::operator=( Fixed const &cp)
{
	this->_fpvalue = cp.getRawBits();
	return (*this);
}

Fixed	Fixed::operator+( Fixed const &cp) const
{
	return (Fixed(this->toFloat() + cp.toFloat()));
}

Fixed	Fixed::operator-( Fixed const &cp) const
{
	return (Fixed(this->toFloat() - cp.toFloat()));
}

// Fixed	&Fixed::operator=( Fixed const &cp)
// {
// 	this->_fpvalue = cp.getRawBits();
// 	return (*this);
// }

// Fixed	&Fixed::operator=( Fixed const &cp)
// {
// 	this->_fpvalue = cp.getRawBits();
// 	return (*this);
// }

std::ostream	&operator<<( std::ostream &o, Fixed const &f )
{
	o << f.toFloat();
	return (o);
}
