// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AInstruction.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 16:17:28 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:50:56 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AINSTRUCTION_HPP
# define AINSTRUCTION_HPP

# include <iostream>
# include <string>
# include <vector>
# include "AInstruction.hpp"

class AInstruction {

public:
	virtual ~AInstruction( void ) { };

	virtual void	execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *) = 0;

	virtual char			getCh( void ) const = 0;

};

#endif
