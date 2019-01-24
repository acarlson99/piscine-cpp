// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 08:47:20 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 10:40:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap( std::string s ) : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _level(1), _name(s), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Constructor called for " << this->getName() << std::endl;
}

FragTrap::FragTrap( void ) : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _level(1), _name(std::string("Defaulty")), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Constructor called for " << this->getName() << std::endl;
}

FragTrap::FragTrap( FragTrap const & cp) { *this = cp; }

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

FragTrap& FragTrap::operator=( FragTrap const &) { return *this; }

void			FragTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->getName() << " punched " << target << " for " << this->getMeleeAttackDamage() << " damage" << std::endl;
}

void			FragTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->getName() << " whipped " << target << " for " << this->getMeleeAttackDamage() << " damage" << std::endl;
}

unsigned int	FragTrap::takeDamage(unsigned int amount)
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
		std::cout << "Oh dear... " << amount << " damage has killed me" << std::endl;
	else
		std::cout << "Ouch! " << amount << " damage set me to " << this->_HP << std::endl;
	return (this->_HP);
}

unsigned int	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_HP + amount < this->_HP)
		this->_HP = this->_maxHP;
	else
		this->_HP = MIN(this->_HP + amount, this->_maxHP);
	std::cout << "Healing for " << amount << std::endl;
	return (this->_HP);
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target) const
{
	(void)target;
}

std::string const	&FragTrap::getName( void ) const
{
	return (this->_name);
}

int					FragTrap::getHealth( void ) const
{
	return (this->_HP);
}

int					FragTrap::getMaxHealth( void ) const
{
	return (this->_maxHP);
}

int					FragTrap::getEnergy( void ) const
{
	return (this->_EP);
}

int					FragTrap::getMaxEnergy( void ) const
{
	return (this->_maxEP);
}

int					FragTrap::getLevel( void ) const
{
	return (this->_level);
}

int					FragTrap::getMeleeAttackDamage( void ) const
{
	return (this->_meleeAttackDamage);
}

int					FragTrap::getRangedAttackDamage( void ) const
{
	return (this->_rangedAttackDamage);
}

int					FragTrap::getArmor( void ) const
{
	return (this->_armorDamageReduction);
}
