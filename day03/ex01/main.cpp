// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 09:04:32 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 11:38:34 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap bot1 = std::string("Jimbo");

	std::cout << bot1.getName() << std::endl;
	bot1.takeDamage(12);
	std::cout << bot1.getHealth() << std::endl;
	bot1.takeDamage(10000);
	std::cout << bot1.getHealth() << std::endl;
	bot1.beRepaired(10);
	std::cout << bot1.getHealth() << std::endl;
	bot1.beRepaired(10000);
	std::cout << bot1.getHealth() << std::endl;
	bot1.beRepaired(UINT_MAX);
	std::cout << bot1.getHealth() << std::endl;
	bot1.meleeAttack("John");
	bot1.rangedAttack("John");
	bot1.vaulthunter_dot_exe("John");

	ScavTrap bot2 = std::string("Timothy");

	std::cout << bot2.getName() << std::endl;
	bot2.takeDamage(12);
	std::cout << bot2.getHealth() << std::endl;
	bot2.takeDamage(10000);
	std::cout << bot2.getHealth() << std::endl;
	bot2.beRepaired(10);
	std::cout << bot2.getHealth() << std::endl;
	bot2.beRepaired(10000);
	std::cout << bot2.getHealth() << std::endl;
	bot2.beRepaired(UINT_MAX);
	std::cout << bot2.getHealth() << std::endl;
	bot2.meleeAttack("John");
	bot2.rangedAttack("John");
	bot2.challengeNewcomer();
}
