// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 15:37:30 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 15:37:42 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

public:
	Weapon( std::string );
	Weapon( void );
	Weapon( Weapon const & cp);
	~Weapon( void );

private:

};

#endif
