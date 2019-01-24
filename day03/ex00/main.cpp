// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 09:04:32 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 10:54:30 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

int main()
{
	FragTrap bot = std::string("Jimbo");

	std::cout << bot.getName() << std::endl;
	bot.takeDamage(12);
	std::cout << bot.getHealth() << std::endl;
	bot.takeDamage(10000);
	std::cout << bot.getHealth() << std::endl;
	bot.beRepaired(10);
	std::cout << bot.getHealth() << std::endl;
	bot.beRepaired(10000);
	std::cout << bot.getHealth() << std::endl;
	bot.beRepaired(UINT_MAX);
	std::cout << bot.getHealth() << std::endl;
	bot.meleeAttack("John");
	bot.rangedAttack("John");
	bot.vaulthunter_dot_exe("John");
}
