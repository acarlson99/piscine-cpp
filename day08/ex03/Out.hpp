// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Out.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:36 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 23:18:33 by acarlson         ###   ########.fr       //
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

	virtual void	execute(int tape[INT_MAX], std::vector<AInstruction>&, unsigned long *, int *);

private:

};

#endif
