// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 10:49:00 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 10:49:09 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>

class Sorcerer {

public:
	Sorcerer( std::string );
	Sorcerer( void );
	Sorcerer( Sorcerer const & cp);
	~Sorcerer( void );
	Sorcerer& operator=( Sorcerer const &);

private:

};

#endif
