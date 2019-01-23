// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/23 09:54:42 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 11:12:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {

public:
	Fixed( int n );
	Fixed( void );
	Fixed( Fixed const & cp);
	~Fixed( void );
	Fixed& operator=( Fixed const &cp);

	int getRawBits( void ) const;

private:
	int		_fpvalue;
	const static int _fractionalBits = 8;
	
};

#endif
