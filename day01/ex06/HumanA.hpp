// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 17:40:11 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 18:22:05 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA {

public:
	HumanA( std::string string, Weapon &weapon );
	HumanA( void );
	~HumanA( void );
	void		attack( void ) const;

private:
	std::string		name;
	Weapon			&weapon;

};

#endif
