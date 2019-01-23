// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/23 09:54:42 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 09:55:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed {

public:
	Fixed( std::string );
	Fixed( void );
	Fixed( Fixed const & cp);
	~Fixed( void );

private:

};

#endif
