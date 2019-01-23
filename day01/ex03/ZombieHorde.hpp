// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 13:54:46 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 09:42:48 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_H
# define ZOMBIEHORDE_H

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde {

public:
	ZombieHorde( int n );
	~ZombieHorde( void );
	void	announce( void ) const;

private:
	int _zomb_num;
	Zombie *_zombs[1000000];

};

#endif
