// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 12:47:06 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 13:06:33 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim {

public:
	Peon( std::string );
	Peon( void );
	Peon( Peon const & cp);
	~Peon( void );
	Peon& operator=( Peon const &);

	std::string const		&getName( void ) const;
	void					introduce( void ) const;
	void					getPolymorphed( void ) const;

private:
	std::string		_name;

};

// std::ostream			&operator<<( std::ostream &o, Peon const &f );

#endif
