// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TakeInput.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:34 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 11:07:31 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TAKEINPUT_HPP
# define TAKEINPUT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class TakeInput: public AInstruction {

public:
	TakeInput( std::string );
	TakeInput( void );
	TakeInput( TakeInput const & cp);
	~TakeInput( void );
	TakeInput& operator=( TakeInput const &);

	void			execute(int (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
