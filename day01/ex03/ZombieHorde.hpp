// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 13:54:46 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 13:55:13 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H
# include <iostream>
# include <string>
# include <stdexcept>

class ZombieHorde {

public:
	ZombieHorde( std::string );
	ZombieHorde( void );
	ZombieHorde( ZombieHorde const & cp);
	~ZombieHorde( void );

private:

};

#endif
