// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 09:52:15 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 10:23:26 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Zombie {

public:
	Zombie( std::string );
	Zombie( void );
	Zombie( Zombie const & cp);
	~Zombie( void );
	Zombie& operator=( Zombie const &);

private:

};

#endif
