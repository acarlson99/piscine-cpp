// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/23 09:54:50 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 11:17:18 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

Fixed::Fixed( int n )
{
	std::cout << "Constructor function called" << std::endl;
	_fpvalue = n;
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

Fixed	&Fixed::operator=( Fixed const &cp)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fpvalue = cp.getRawBits();
	return (*this);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "Setting to raw value " << raw << std::endl;
	this->_fpvalue = raw;
}
