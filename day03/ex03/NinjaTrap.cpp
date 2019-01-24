// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 14:07:07 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:10:32 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

std::string		NinjaTrap::_hunterAttacks[10] = {
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

NinjaTrap::NinjaTrap( std::string s )
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

NinjaTrap::NinjaTrap( void )
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

NinjaTrap::NinjaTrap( NinjaTrap const & cp) { *this = cp; }

NinjaTrap::~NinjaTrap( void )
{
	std::cout << "Destructor called for " << this->getName() << std::endl;
}

NinjaTrap& NinjaTrap::operator=( NinjaTrap const &) { return *this; }

void			NinjaTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->getName() << " punched " << target << " for " << this->getMeleeAttackDamage() << " damage" << std::endl;
}

void			NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->getName() << " whipped " << target << " for " << this->getRangedAttackDamage() << " damage" << std::endl;
}

void			NinjaTrap::ninjaShoebox(std::string const &target) const
{
	std::cout << this->getName() << " " << _hunterAttacks[mt_rand() % 10] << "s " << target << std::endl;
}
