// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 14:07:07 by acarlson          #+#    #+#             //
/*   Updated: 2019/01/24 21:22:46 by acarlson         ###   ########.fr       */
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
	_HP = 60;
	_maxHP = 60;
	_EP = 120;
	_maxEP = 120;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "Start bootup sequence: " << this->getName() << std::endl;
}

NinjaTrap::NinjaTrap( void )
{
	_HP = 60;
	_maxHP = 60;
	_EP = 120;
	_maxEP = 120;
	_level = 1;
	_name = std::string("Defaulty");
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 5;
	_armorDamageReduction = 0;
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
