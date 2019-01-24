// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 11:25:10 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 11:37:43 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include <random>

# ifndef MAX
#  define MAX(a,b) (a > b ? a : b)
# endif
# ifndef MIN
#  define MIN(a,b) (a < b ? a : b)
# endif

class ScavTrap {

public:
	ScavTrap( std::string );
	ScavTrap( void );
	ScavTrap( ScavTrap const & cp);
	~ScavTrap( void );
	ScavTrap& operator=( ScavTrap const &);

	void			meleeAttack(std::string const &target) const;
	void			rangedAttack(std::string const &target) const;
	unsigned int	takeDamage(unsigned int amount);
	unsigned int	beRepaired(unsigned int amount);
	void			challengeNewcomer( void ) const;

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
	unsigned int			_HP;
	unsigned int			_maxHP;
	unsigned int			_EP;
	unsigned int			_maxEP;
	unsigned int			_level;
	const std::string		_name;
	unsigned int			_meleeAttackDamage;
	unsigned int			_rangedAttackDamage;
	int						_armorDamageReduction;

	static std::mt19937	mt_rand;
	static std::string	_challenges[10];
};

#endif
