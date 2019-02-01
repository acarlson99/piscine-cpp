// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValInc.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:33 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 10:48:49 by acarlson         ###   ########.fr       //
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

	void			execute(int tape[INT_MAX], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
