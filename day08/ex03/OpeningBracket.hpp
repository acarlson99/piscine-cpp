// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   OpeningBracket.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 16:24:03 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 16:41:36 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OPENINGBRACKET_HPP
# define OPENINGBRACKET_HPP

# include <iostream>
# include <string>
# include "AInstruction.hpp"

class OpeningBracket : public AInstruction {

public:
	OpeningBracket( std::string );
	OpeningBracket( void );
	OpeningBracket( OpeningBracket const & cp);
	virtual ~OpeningBracket( void );
	OpeningBracket& operator=( OpeningBracket const &);

private:

};

#endif
