// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 14:33:48 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 21:27:51 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "SuperTrap.hpp"


#include "SuperTrap.hpp"

SuperTrap::SuperTrap( std::string s )
{
	_HP = 100;
	_maxHP = 100;
	_EP = 120;
	_maxEP = 120;
	_level = 1;
	_name = s;
	_meleeAttackDamage = 60;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

SuperTrap::SuperTrap( void ) { }
SuperTrap::SuperTrap( SuperTrap const & cp) { *this = cp; }
SuperTrap::~SuperTrap( void ) { }
SuperTrap& SuperTrap::operator=( SuperTrap const &) { return *this; }

void			SuperTrap::meleeAttack(std::string const &target) const
{
	std::cout << this->getName() << " YAAAAAAAAAAAAA'd " << target << " for " << this->getMeleeAttackDamage() << " damage" << std::endl;
}

void			SuperTrap::rangedAttack(std::string const &target) const
{
	std::cout << this->getName() << " whipped " << target << " for " << this->getRangedAttackDamage() << " damage" << std::endl;
}
