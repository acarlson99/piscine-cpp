// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ValInc.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:33 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:39:17 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VALINC_HPP
# define VALINC_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class ValInc {

public:
	ValInc( std::string );
	ValInc( void );
	ValInc( ValInc const & cp);
	~ValInc( void );
	ValInc& operator=( ValInc const &);

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>, int *, int *);

private:

};

#endif
