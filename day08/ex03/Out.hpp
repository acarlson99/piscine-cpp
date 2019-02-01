// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Out.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:36 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 11:07:09 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OUT_HPP
# define OUT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "AInstruction.hpp"

class Out: public AInstruction {

public:
	Out( std::string );
	Out( void );
	Out( Out const & cp);
	~Out( void );
	Out& operator=( Out const &);

	void	execute(int (&tape)[4096], std::vector<AInstruction *>&, unsigned long *, int *);
	char			getCh( void ) const;

private:
	char		c;

};

#endif
