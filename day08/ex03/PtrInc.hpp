// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PtrInc.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:35 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:52:15 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PTRINC_HPP
# define PTRINC_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class PtrInc: public AInstruction {

public:
	PtrInc( std::string );
	PtrInc( void );
	PtrInc( PtrInc const & cp);
	~PtrInc( void );
	PtrInc& operator=( PtrInc const &);

	void	execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
