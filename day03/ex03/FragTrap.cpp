// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 08:47:20 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:01:53 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

std::string		FragTrap::_hunterAttacks[10] = {
	"whip",
	"smack",
	"noodle slap",
	"spank",
	"denigrate",
	"shoot",
	"finger",
	"thonk",
	"shock",
	"sawblade",
};

FragTrap::FragTrap( std::string s )
{
	_HP = 100;
	_maxHP = 100;
	_EP = 100;
	_maxEP = 100;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
}

FragTrap::FragTrap( void )
{
	_HP = 100;
	_maxHP = 100;
	_EP = 100;
	_maxEP = 100;
	_level = 1;
	_name = std::string("Defaulty");
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
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
	std::cout << this->getName() << " whipped " << target << " for " << this->getRangedAttackDamage() << " damage" << std::endl;
}

void			FragTrap::vaulthunter_dot_exe(std::string const &target) const
{
	std::cout << this->getName() << " " << _hunterAttacks[mt_rand() % 10] << "s " << target << std::endl;
}
