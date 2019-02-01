// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValDec.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:34 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:33:21 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VALDEC_HPP
# define VALDEC_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class ValDec: public AInstruction {

public:
	ValDec( std::string );
	ValDec( void );
	ValDec( ValDec const & cp);
	~ValDec( void );
	ValDec& operator=( ValDec const &);

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction *>&, unsigned long *, int *);

private:

};

#endif
