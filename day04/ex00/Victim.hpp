// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 12:25:45 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 13:13:52 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include <string>

class Victim {

public:
	Victim( std::string );
	Victim( void );
	Victim( Victim const & cp);
	~Victim( void );
	Victim& operator=( Victim const &);

	std::string const		&getName( void ) const;
	void					getPolymorphed( void ) const;

private:
	std::string		_name;

};

std::ostream			&operator<<( std::ostream &o, Victim const &f );

#endif
