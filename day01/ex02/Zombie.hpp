// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 09:52:15 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 10:46:55 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Zombie {

public:
	std::string		type;
	std::string		name;


	Zombie(  std::string n, std::string t );
	Zombie( std::string n );
	Zombie( void );
	~Zombie( void );

	void		announce( void );

private:

};

#endif
