// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 11:44:22 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:03:45 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

std::mt19937	ClapTrap::mt_rand(time(0));

ClapTrap::ClapTrap( std::string s ) : _HP(0), _maxHP(0), _EP(0), _maxEP(0), _level(0), _name(s), _meleeAttackDamage(0), _rangedAttackDamage(0), _armorDamageReduction(0)
{
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
}

ClapTrap::ClapTrap( void ) : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _level(1), _name(std::string("Defaulty")), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & cp) { *this = cp; }

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

ClapTrap& ClapTrap::operator=( ClapTrap const &) { return *this; }

void			ClapTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->getName() << " clubbed " << target << " for " << this->getMeleeAttackDamage() << " damage" << std::endl;
}

void			ClapTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->getName() << " shot " << target << " for " << this->getRangedAttackDamage() << " damage" << std::endl;
}

unsigned int	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_HP == 0)
	{
		std::cout << "I'm already dead 😖" << std::endl;
		return (0);
	}
	if (this->_HP - ((amount - this->_armorDamageReduction) > amount ? 0 : amount - this->_armorDamageReduction) > this->_HP)
		this->_HP = 0;
	else
		this->_HP -= (amount - this->_armorDamageReduction) > amount ? 0 : amount - this->_armorDamageReduction;
	if (this->_HP == 0)
		std::cout << "Darn.  Death" << std::endl;
	else
		std::cout << "Ouch! " << amount << " damage set " << this->_name << " to " << this->_HP << std::endl;
	return (this->_HP);
}

unsigned int	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_HP + amount < this->_HP)
		this->_HP = this->_maxHP;
	else
		this->_HP = MIN(this->_HP + amount, this->_maxHP);
	std::cout << amount << " health restored to " << this->_name << std::endl;
	return (this->_HP);
}

std::string const	&ClapTrap::getName( void ) const
{
	return (this->_name);
}

int					ClapTrap::getHealth( void ) const
{
	return (this->_HP);
}

int					ClapTrap::getMaxHealth( void ) const
{
	return (this->_maxHP);
}

int					ClapTrap::getEnergy( void ) const
{
	return (this->_EP);
}

int					ClapTrap::getMaxEnergy( void ) const
{
	return (this->_maxEP);
}

int					ClapTrap::getLevel( void ) const
{
	return (this->_level);
}

int					ClapTrap::getMeleeAttackDamage( void ) const
{
	return (this->_meleeAttackDamage);
}

int					ClapTrap::getRangedAttackDamage( void ) const
{
	return (this->_rangedAttackDamage);
}

int					ClapTrap::getArmor( void ) const
{
	return (this->_armorDamageReduction);
}
