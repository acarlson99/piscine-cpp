// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 14:17:00 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 15:52:35 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

Span::Span( unsigned int size ) throw(Span::BadSizeException) : _size(size)
{
	if (size == 0)
		throw Span::BadSizeException();
	std::vector<int>	_nums(_size);
}

Span::Span( Span const & cp) { *this = cp; }

Span::~Span( void ) { }

Span& Span::operator=( Span const &cp)
{
	this->_size = cp._size;
	std::vector<int>	_nums(_size);
	for (unsigned long i = 0; i < cp._nums.size(); i++)
		this->_nums.push_back(cp._nums[i]);
	return *this;
}

void		Span::addNumber( int n ) throw(Span::BadSizeException)
{
	if (_nums.size() >= this->_size)
		throw Span::BadSizeException();
	_nums.push_back(n);
	for (unsigned long i = 0; i < this->_nums.size(); i++)
		std::cout << this->_nums[i] << std::endl;
}

int			Span::shortestSpan( void ) throw(Span::BadSizeException)
{
	if (this->_nums.size() < 2)
		throw Span::BadSizeException();
	return (0);
}

int			Span::longestSpan( void ) throw(Span::BadSizeException)
{
	if (this->_nums.size() < 2)
		throw Span::BadSizeException();
	return (0);
}

Span::BadSizeException::BadSizeException( void ) { }
Span::BadSizeException::BadSizeException( BadSizeException const & cp) { *this = cp; }
Span::BadSizeException::~BadSizeException( void ) throw() { }
Span::BadSizeException& Span::BadSizeException::operator=( BadSizeException const &) { return *this; }
const char* Span::BadSizeException::what( void ) const throw() {
	return "Bad size";
}
