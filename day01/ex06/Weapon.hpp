// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 15:37:30 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 17:43:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon {

public:
	std::string	type;

	Weapon( std::string );
	Weapon( void );
	~Weapon( void );

	void	setType( std::string name );

private:

};

#endif
