// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TakeInput.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:34 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 22:07:58 by acarlson         ###   ########.fr       //
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

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>, int *, int *);

private:

};

#endif
