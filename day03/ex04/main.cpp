// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 09:04:32 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:37:41 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

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

	NinjaTrap bot3 = std::string("Kuro");

	std::cout << bot3.getName() << std::endl;
	bot3.takeDamage(12);
	std::cout << bot3.getHealth() << std::endl;
	bot3.takeDamage(10000);
	std::cout << bot3.getHealth() << std::endl;
	bot3.beRepaired(10);
	std::cout << bot3.getHealth() << std::endl;
	bot3.beRepaired(10000);
	std::cout << bot3.getHealth() << std::endl;
	bot3.beRepaired(UINT_MAX);
	std::cout << bot3.getHealth() << std::endl;
	bot3.meleeAttack("John");
	bot3.rangedAttack("John");
	bot3.ninjaShoebox(bot1);
	bot3.ninjaShoebox(bot2);

	SuperTrap bot4 = std::string("Kuro");

	std::cout << bot4.getName() << std::endl;
	bot4.takeDamage(12);
	std::cout << bot4.getHealth() << std::endl;
	bot4.takeDamage(10000);
	std::cout << bot4.getHealth() << std::endl;
	bot4.beRepaired(10);
	std::cout << bot4.getHealth() << std::endl;
	bot4.beRepaired(10000);
	std::cout << bot4.getHealth() << std::endl;
	bot4.beRepaired(UINT_MAX);
	std::cout << bot4.getHealth() << std::endl;
	bot4.meleeAttack("John");
	bot4.rangedAttack("John");
	bot4.ninjaShoebox(bot1);
	bot4.ninjaShoebox(bot2);
}
