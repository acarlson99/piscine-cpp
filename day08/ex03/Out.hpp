// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Out.hpp                                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:36 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef OUT_HPP
# define OUT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Out {

public:
	Out( std::string );
	Out( void );
	Out( Out const & cp);
	~Out( void );
	Out& operator=( Out const &);

private:

};

#endif
