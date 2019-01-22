// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 14:41:58 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 15:03:36 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
#include <sstream>

class Brain {

public:
	Brain( void );
	~Brain( void );
	std::string		identify( void ) const;

private:

};

#endif
