// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClosingBracket.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 21:55:49 by acarlson         ###   ########.fr       //
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

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>, int *, int *);

private:

};

#endif
