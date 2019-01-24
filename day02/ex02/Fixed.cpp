// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/23 09:54:50 by acarlson          #+#    #+#             //
/*   Updated: 2019/01/23 16:41:04 by acarlson         ###   ########.fr       */
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
	return (this->_fpvalue);
}

void	Fixed::setRawBits( int const raw )
{
	this->_fpvalue = raw;
}

int		Fixed::toInt( void ) const
{
	return _fpvalue >> this->_fractionalBits;
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

Fixed	Fixed::operator+( Fixed const &n) const
{
	return (this->toFloat() + n.toFloat());
}

Fixed	Fixed::operator-( Fixed const &n) const
{
	return (this->toFloat() - n.toFloat());
}

Fixed	Fixed::operator*( Fixed const &n) const
{
	return (this->toFloat() * n.toFloat());
}

Fixed	Fixed::operator/( Fixed const &n) const
{
	return (this->toFloat() / n.toFloat());
}

bool Fixed::operator>( Fixed const &n ) const
{
	return (this->toFloat() > n.toFloat());
}

bool Fixed::operator<( Fixed const &n ) const
{
	return (this->toFloat() < n.toFloat());
}

bool Fixed::operator>=( Fixed const &n)  const
{
	return (this->toFloat() >= n.toFloat());
}

bool Fixed::operator<=( Fixed const &n)  const
{
	return (this->toFloat() <= n.toFloat());
}

bool Fixed::operator==( Fixed const &n ) const
{
	return (this->toFloat() == n.toFloat());
}

bool Fixed::operator!=( Fixed const &n)  const
{
	return (this->toFloat() != n.toFloat());
}

Fixed	Fixed::operator++( int )
{
	float n = this->toFloat();
	this->_fpvalue++;
	return (Fixed(n));
}

Fixed	Fixed::operator++( void )
{
	++this->_fpvalue;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	float n = this->toFloat();
	this->_fpvalue--;
	return (Fixed(n));
}

Fixed	Fixed::operator--( void )
{
	--this->_fpvalue;
	return (*this);
}

Fixed	&Fixed::max( Fixed &a, Fixed &b )
{
	return (a > b ? a : b);
}

Fixed const	&Fixed::max( Fixed const &a, Fixed const &b )
{
	return (a > b ? a : b);
}

Fixed	&Fixed::min( Fixed &a, Fixed &b )
{
	return (a < b ? a : b);
}

Fixed	const &Fixed::min( Fixed const &a, Fixed const &b )
{
	return (a < b ? a : b);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &f )
{
	o << f.toFloat();
	return (o);
}
