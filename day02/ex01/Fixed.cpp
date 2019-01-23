// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/23 09:54:50 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 12:46:13 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( int n )		// TODO: convert to fixed(8) point value
{
	std::cout << "Constructor function called" << std::endl;
	_fpvalue = n << _fractionalBits;
//	_fpvalue = n;
//	_fpvalue = (n / (1 << _fractionalBits));
}

Fixed::Fixed( float n )		// TODO: convert to fixed(8) point value
{
	std::cout << "Constructor function called" << std::endl;
	_fpvalue = std::roundf(n * (1 << _fractionalBits));
}

Fixed::Fixed( void )
{
	std::cout << "Default constructor function called" << std::endl;
	_fpvalue = 0;
}

Fixed::Fixed( Fixed const & cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor function called" << std::endl;
}

int		Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits function called" << std::endl;
	return (_fpvalue);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "Setting to raw value " << raw << std::endl;
	this->_fpvalue = raw;
}

int		Fixed::toInt( void ) const	// TODO: return integer
{
	return _fpvalue >> _fractionalBits;
	return _fpvalue;
}

float	Fixed::toFloat( void ) const	// TODO: convert to float
{
	return ((double)_fpvalue / (1 << _fractionalBits));
}

Fixed	&Fixed::operator=( Fixed const &cp)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fpvalue = cp.getRawBits();
	return (*this);
}

std::ostream	&operator<<( std::ostream &o, Fixed const &f )
{
	o << f.toFloat();
	return (o);
}
