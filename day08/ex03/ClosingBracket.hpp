// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClosingBracket.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:40 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:51:08 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLOSINGBRACKET_HPP
# define CLOSINGBRACKET_HPP

# include <iostream>
# include <string>
# include "AInstruction.hpp"

class ClosingBracket: public AInstruction {

public:
	ClosingBracket( std::string );
	ClosingBracket( void );
	ClosingBracket( ClosingBracket const & cp);
	~ClosingBracket( void );
	ClosingBracket& operator=( ClosingBracket const &);

	void			execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
