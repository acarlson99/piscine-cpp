// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 20:26:24 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 23:29:08 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human( void )
{
	ftab.push_back(Human::meleeAttack);
}

Human::~Human( void )
{
}

void Human::meleeAttack(std::string const & target) const
{
	std::cout << "Whacking " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) const
{
	std::cout << "Shot arrow at " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) const
{
	std::cout << "REEEEEEE " << target << " OUT" << std::endl;
}

void Human::fortnitedance( void ) const
{
	std::cout << "Invalid action" << std::endl;
}

std::string arr[3] =
{
	[0] = "melee",
	[1] = "ranged",
	[2] = "shout",
};

void Human::action(std::string const & action_name, std::string const & target)
{
	int i = 0;
	for (; i < 3; i++)
		if (arr[i] == action_name)
			break;
	ftab[i](target);
}
