// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 20:41:24 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 00:23:07 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

int main()
{
	Human jim;

	jim.action("melee", "Jonathan");
	jim.action("ranged", "Jonathan");
	jim.action("shout", "Jonathan");
	jim.action("Random", "Jonathan");
}
