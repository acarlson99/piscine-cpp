// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 18:45:07 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 19:19:14 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"
# include "PlasmaRifle.hpp"
# include "PowerFist.hpp"
# include "Enemy.hpp"

class Character {

public:
	Character( std::string const & );
	Character( void );
	Character( Character const & cp);
	~Character( void );
	Character& operator=( Character const &);

	void	recoverAP( void );
	void	equip( AWeapon * );
	void	attack( Enemy * );

	std::string const		&getName( void ) const;
	int						getAP( void ) const;
	AWeapon const			*getWeapon( void ) const;
	
private:
	std::string const	&_name;
	int					_AP;
	AWeapon				*_weapon;

	static std::string	_dname;

};

std::ostream	&operator<<( std::ostream &o, Character const &f );

#endif
