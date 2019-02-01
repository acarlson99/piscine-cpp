// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AInstruction.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 16:17:28 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 00:17:06 by acarlson         ###   ########.fr       //
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
	virtual ~AInstruction( void ) = 0;
	// AInstruction& operator=( AInstruction const &);

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>&, unsigned long *, int *) = 0;

	virtual char			getCh( void ) const = 0;

};

#endif
