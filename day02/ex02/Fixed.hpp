// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/23 09:54:42 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 15:56:55 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {

public:
	Fixed( int n );
	Fixed( float n );
	Fixed( void );
	Fixed( Fixed const & cp);
	~Fixed( void );
	Fixed& operator=( Fixed const &cp);

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	int		toInt( void ) const;
	float	toFloat( void ) const;

	bool	operator>( Fixed const &n ) const;
	bool	operator<( Fixed const &n ) const;
	bool	operator>=( Fixed const &n ) const;
	bool	operator<=( Fixed const &n ) const;
	bool	operator==( Fixed const &n ) const;
	bool	operator!=( Fixed const &n ) const;

	Fixed operator+( Fixed const &n ) const;
	Fixed operator-( Fixed const &n ) const;
	Fixed operator*( Fixed const &n ) const;
	Fixed operator/( Fixed const &n ) const;

	Fixed operator++( int );	// postfix
	Fixed operator++( );	// prefix
	Fixed operator--( int );	// postfix
	Fixed operator--( );	// prefix

	static Fixed &max( Fixed &a, Fixed &b );
	static Fixed const &max( Fixed const &a, Fixed const &b );
	static Fixed &min( Fixed &a, Fixed &b );
	static Fixed const &min( Fixed const &a, Fixed const &b );

private:
	int		_fpvalue;
	const static int _fractionalBits = 8;
	
};

std::ostream	&operator<<( std::ostream &o, Fixed const &f );

#endif
