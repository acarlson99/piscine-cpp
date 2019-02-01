// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TakeInput.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:20:34 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:23:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TAKE_HPP
# define TAKE_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Take {

public:
	Take( std::string );
	Take( void );
	Take( Take const & cp);
	~Take( void );
	Take& operator=( Take const &);

private:

};

#endif
