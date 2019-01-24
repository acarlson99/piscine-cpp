// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 11:44:30 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 12:28:56 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>
# include <random>

# ifndef MAX
#  define MAX(a,b) (a > b ? a : b)
# endif
# ifndef MIN
#  define MIN(a,b) (a < b ? a : b)
# endif

class ClapTrap {

public:
	ClapTrap( std::string );
	ClapTrap( void );
	ClapTrap( ClapTrap const & cp);
	~ClapTrap( void );
	ClapTrap& operator=( ClapTrap const &);

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

protected:
	unsigned int			_HP;
	unsigned int			_maxHP;
	unsigned int			_EP;
	unsigned int			_maxEP;
	unsigned int			_level;
	std::string				_name;
	unsigned int			_meleeAttackDamage;
	unsigned int			_rangedAttackDamage;
	int						_armorDamageReduction;

	static std::mt19937	mt_rand;
};

#endif
