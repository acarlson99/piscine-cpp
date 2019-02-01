// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValDec.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:34 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:39:17 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VALDEC_HPP
# define VALDEC_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class ValDec {

public:
	ValDec( std::string );
	ValDec( void );
	ValDec( ValDec const & cp);
	~ValDec( void );
	ValDec& operator=( ValDec const &);

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>, int *, int *);

private:

};

#endif
