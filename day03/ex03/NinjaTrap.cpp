// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 14:07:07 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:23:38 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

std::string		NinjaTrap::_shoebox[3] = {
	"teleports behind",
	"nothing personnel",
	"unsheaths katana at",
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
	std::cout << this->getName() << " YAAAAAAAAAAAAA'd " << target << " for " << this->getMeleeAttackDamage() << " damage" << std::endl;
}

void			NinjaTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->getName() << " threw pebbles at " << target << " for " << this->getRangedAttackDamage() << " damage" << std::endl;
}

void			NinjaTrap::ninjaShoebox(FragTrap const &target) const
{
	std::cout << this->getName() << " " << _shoebox[mt_rand() % 3] << " " << target.getName() << std::endl;
}

void			NinjaTrap::ninjaShoebox(ScavTrap const &target) const
{
	std::cout << this->getName() << " " << _shoebox[mt_rand() % 3] << " " << target.getName() << std::endl;
}
