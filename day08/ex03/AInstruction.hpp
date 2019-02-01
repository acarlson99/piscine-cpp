// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AInstruction.hpp                                   :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 16:17:28 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 22:12:29 by acarlson         ###   ########.fr       //
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
	AInstruction( std::string );
	AInstruction( void );
	AInstruction( AInstruction const & cp);
	virtual ~AInstruction( void );
	AInstruction& operator=( AInstruction const &);

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>, int *, int *);

protected:
	char		c;

};

#endif
