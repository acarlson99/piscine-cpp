// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 20:26:24 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 00:23:58 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

typedef void (Human::*Actions)(std::string const & target);

Human::Human( void )
{
}

Human::~Human( void )
{
}

void Human::meleeAttack(std::string const & target) 
{
	std::cout << "Whacking " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) 
{
	std::cout << "Shot arrow at " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) 
{
	std::cout << "REEEEEEE " << target << " OUT" << std::endl;
}

void Human::fortnitedance( std::string const & target )
{
	std::cout << "Confusedly dancing at " << target << std::endl;
}

std::string arr[3] =
{
	[0] = "melee",
	[1] = "ranged",
	[2] = "shout",
};

void Human::action(std::string const & action_name, std::string const & target)
{
	Actions ftab[4] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout, &Human::fortnitedance};

	int i = 0;
	for (; i < 3; i++)
		if (arr[i] == action_name)
			break;
	(this->*ftab[i])(target);
}
