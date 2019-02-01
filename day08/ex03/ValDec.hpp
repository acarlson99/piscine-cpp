// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValDec.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:34 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:53:08 by acarlson         ###   ########.fr       //
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

	void			execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
