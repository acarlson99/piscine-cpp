// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 11:25:12 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 11:37:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

std::mt19937	ScavTrap::mt_rand(time(0));

std::string		ScavTrap::_challenges[10] = {
	"bink",
	"bonk",
	"bork",
	"boink",
	"biff",
	"boof",
	"brofive",
	"bash",
	"bip",
	"boop",
};

ScavTrap::ScavTrap( std::string s ) : _HP(100), _maxHP(100), _EP(50), _maxEP(50), _level(1), _name(s), _meleeAttackDamage(20), _rangedAttackDamage(15), _armorDamageReduction(3)
{
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap( void ) : _HP(100), _maxHP(100), _EP(100), _maxEP(100), _level(1), _name(std::string("Defaulty")), _meleeAttackDamage(30), _rangedAttackDamage(20), _armorDamageReduction(5)
{
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & cp) { *this = cp; }

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

ScavTrap& ScavTrap::operator=( ScavTrap const &) { return *this; }

void			ScavTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->getName() << " clubbed " << target << " for " << this->getMeleeAttackDamage() << " damage" << std::endl;
}

void			ScavTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->getName() << " shot " << target << " for " << this->getRangedAttackDamage() << " damage" << std::endl;
}

unsigned int	ScavTrap::takeDamage(unsigned int amount)
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
		std::cout << "I'M DEAD I'M DEAD OHMYGOD I'M DEAD" << std::endl;
	else
		std::cout << "Ouch! " << amount << " damage set me to " << this->_HP << std::endl;
	return (this->_HP);
}

unsigned int	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_HP + amount < this->_HP)
		this->_HP = this->_maxHP;
	else
		this->_HP = MIN(this->_HP + amount, this->_maxHP);
	std::cout << amount << " health restored" << std::endl;
	return (this->_HP);
}

void			ScavTrap::challengeNewcomer( void ) const
{
	std::cout << this->getName() << " takes on challenge: " << _challenges[mt_rand() % 10] << std::endl;
}

std::string const	&ScavTrap::getName( void ) const
{
	return (this->_name);
}

int					ScavTrap::getHealth( void ) const
{
	return (this->_HP);
}

int					ScavTrap::getMaxHealth( void ) const
{
	return (this->_maxHP);
}

int					ScavTrap::getEnergy( void ) const
{
	return (this->_EP);
}

int					ScavTrap::getMaxEnergy( void ) const
{
	return (this->_maxEP);
}

int					ScavTrap::getLevel( void ) const
{
	return (this->_level);
}

int					ScavTrap::getMeleeAttackDamage( void ) const
{
	return (this->_meleeAttackDamage);
}

int					ScavTrap::getRangedAttackDamage( void ) const
{
	return (this->_rangedAttackDamage);
}

int					ScavTrap::getArmor( void ) const
{
	return (this->_armorDamageReduction);
}
