// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 09:53:30 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 12:55:39 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <string>

class ZombieEvent {

private:
	static std::string _zombieType;

public:
	static Zombie*		newZombie(std::string name);
	static Zombie*		newZombie( void );
	static Zombie*		randomChump( void );
};

#endif
