// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 18:09:21 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 18:21:49 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB {

public:
	HumanB( std::string string );
	HumanB( void );
	~HumanB( void );
	void		attack( void ) const;
	void		setWeapon( Weapon &w );

private:
	std::string		name;
	Weapon			*weapon;

};

#endif
