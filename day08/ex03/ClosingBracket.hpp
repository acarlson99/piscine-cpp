// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClosingBracket.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLOSINGBRACKET_HPP
# define CLOSINGBRACKET_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class ClosingBracket {

public:
	ClosingBracket( std::string );
	ClosingBracket( void );
	ClosingBracket( ClosingBracket const & cp);
	~ClosingBracket( void );
	ClosingBracket& operator=( ClosingBracket const &);

private:

};

#endif
