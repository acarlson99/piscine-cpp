// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 14:45:17 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 16:48:36 by acarlson         ###   ########.fr       //
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
			_arr = new T[n];
			for (unsigned i = 0; i < _size; i++)
				_arr[i] = i;
		}
	Array( void )
		{
		}
	Array( Array const & cp)
		{
			(void)cp;
		}
	~Array( void )
		{
		}
	Array& operator=( Array const &)
		{
		}
	int operator[]( unsigned int n )
		{
			if (n < _size)
				return (_arr[n]);
			else
				return (0);
		}

private:
	T				*_arr;
	unsigned int	_size;

};

#endif
