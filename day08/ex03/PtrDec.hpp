// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrDec.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:35 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:39:17 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PTRDEC_HPP
# define PTRDEC_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class PtrDec {

public:
	PtrDec( std::string );
	PtrDec( void );
	PtrDec( PtrDec const & cp);
	~PtrDec( void );
	PtrDec& operator=( PtrDec const &);

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>, int *, int *);

private:

};

#endif
