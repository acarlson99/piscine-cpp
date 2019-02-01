// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValInc.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:33 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 13:53:32 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VALINC_HPP
# define VALINC_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class ValInc: virtual public AInstruction {

public:
	ValInc( std::string );
	ValInc( void );
	ValInc( ValInc const & cp);
	~ValInc( void );
	ValInc& operator=( ValInc const &);

	void			execute(unsigned char (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
