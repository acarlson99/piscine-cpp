// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 11:25:10 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 12:29:14 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <random>
# include "ClapTrap.hpp"

# ifndef MAX
#  define MAX(a,b) (a > b ? a : b)
# endif
# ifndef MIN
#  define MIN(a,b) (a < b ? a : b)
# endif

class ScavTrap: public ClapTrap {

public:
	ScavTrap( std::string );
	ScavTrap( void );
	ScavTrap( ScavTrap const & cp);
	~ScavTrap( void );
	ScavTrap& operator=( ScavTrap const &);
	
	void			challengeNewcomer( void ) const;

	void				meleeAttack(std::string const &target) const;
	void				rangedAttack(std::string const &target) const;
	
	std::string const	&getName( void ) const;
	int					getHealth( void ) const;
	int					getMaxHealth( void ) const;
	int					getEnergy( void ) const;
	int					getMaxEnergy( void ) const;
	int					getLevel( void ) const;
	int					getMeleeAttackDamage( void ) const;
	int					getRangedAttackDamage( void ) const;
	int					getArmor( void ) const;

private:
	static std::string	_challenges[10];
};

#endif
