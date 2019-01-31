// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 15:03:31 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 16:36:09 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"

template<typename T>
Array<T>::Array( unsigned int n )
{
	T *arr = new T[n];
	this->_size = n;
}

template<typename T>
Array<T>::Array( void )
{
	T arr = new T[0];
	this->_size = 0;
}

template<typename T>
Array<T>::Array( Array const & cp) { *this = cp; }
template<typename T>
Array<T>::~Array( void ) { }
template<typename T>
Array<T>& Array<T>::operator=( Array const &)
{
}
