// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 10:49:00 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 12:57:32 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer {

public:
	Sorcerer( std::string, std::string );
	Sorcerer( Sorcerer const & cp);
	~Sorcerer( void );
	Sorcerer& operator=( Sorcerer const &);

	std::string const	&getName( void ) const;
	std::string const	&getTitle( void ) const;
	void				introduce( void ) const;
	void				polymorph( Victim const & ) const;
//	void				polymorph( Peon const & ) const;

private:
	Sorcerer( void );
	std::string		_name;
	std::string		_title;

};

std::ostream	&operator<<( std::ostream &o, Sorcerer const &f );

#endif
