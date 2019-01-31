// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 17:52:58 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 18:21:01 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template<typename T = int>
class Array {

public:
	Array( unsigned int n ) : _size(n)
		{
			_arr = new T*[n];
			for (unsigned int i = 0; i < n; i++)
				_arr[i] = new T;
		}
	Array( void ) : _size(0)
		{
		}
	Array( Array const & cp)
		{
			(void)cp;
		}
	~Array( void )
		{
		}
	Array& operator=( Array const &cp)
		{
			this->_size = cp._size;
			this->_arr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_arr[i] = cp[i];
		}
	T** operator[]( unsigned int n ) throw(std::exception)
		{
			if (n < _size)
				return (&_arr[n]);
			else
				throw std::exception();
		}

	unsigned int	size( void ) const
		{
			return (_size);
		}

private:
	T				**_arr;
	unsigned int	_size;

};

#endif
