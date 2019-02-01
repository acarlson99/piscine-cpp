// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrDec.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:35 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:47:52 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PTRDEC_HPP
# define PTRDEC_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class PtrDec: public AInstruction {

public:
	PtrDec( std::string );
	PtrDec( void );
	PtrDec( PtrDec const & cp);
	~PtrDec( void );
	PtrDec& operator=( PtrDec const &);

	void	execute(int tape[INT_MAX], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
