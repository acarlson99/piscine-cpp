// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 11:25:12 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 12:34:12 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

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

ScavTrap::ScavTrap( std::string s )
{
	_HP = 100;
	_maxHP = 100;
	_EP = 50;
	_maxEP = 50;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap( void )
{
	_HP = 100;
	_maxHP = 100;
	_EP = 50;
	_maxEP = 50;
	_level = 1;
	_name = "Defaulty";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
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

void			ScavTrap::challengeNewcomer( void ) const
{
	std::cout << this->getName() << " takes on challenge: " << _challenges[mt_rand() % 10] << std::endl;
}
