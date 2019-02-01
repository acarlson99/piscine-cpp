// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 14:17:00 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 15:10:52 by acarlson         ###   ########.fr       //
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
}

int			Span::shortestSpan( void ) throw(Span::BadSizeException)
{
	if (this->_nums.size() < 2)
		throw Span::BadSizeException();
	int		diff = INT_MAX;
	std::sort(this->_nums.begin(), this->_nums.end());
	std::vector<int>::iterator i = this->_nums.begin();
	std::vector<int>::iterator j = this->_nums.begin();
	++j;
	for (; j < this->_nums.end() && diff > 0; i++, j++)
		diff = std::min(diff, *j - *i);
	return (diff);
}

int			Span::longestSpan( void ) throw(Span::BadSizeException)
{
	if (this->_nums.size() < 2)
		throw Span::BadSizeException();
	return (*std::max_element(std::begin(this->_nums), std::end(this->_nums)) - *std::min_element(std::begin(this->_nums), std::end(this->_nums)));
}

Span::BadSizeException::BadSizeException( void ) { }
Span::BadSizeException::BadSizeException( BadSizeException const & cp) { *this = cp; }
Span::BadSizeException::~BadSizeException( void ) throw() { }
Span::BadSizeException& Span::BadSizeException::operator=( BadSizeException const &) { return *this; }
const char* Span::BadSizeException::what( void ) const throw() {
	return "Bad size";
}
