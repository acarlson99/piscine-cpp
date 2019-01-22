// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 08:43:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 14:26:29 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	ZombieHorde *h = new ZombieHorde(4);

	h->announce();
	delete h;
	h = nullptr;
	return (0);
}
