// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/20 15:59:57 by acarlson          #+#    #+#             //
//   Updated: 2019/01/20 18:41:28 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"

void		Contact::print()
{
	std::cout << firstname << std::endl;
	std::cout << lastname << std::endl;
	std::cout << nickname << std::endl;
	std::cout << login << std::endl;
	std::cout << postal_address << std::endl;
	std::cout << email_address << std::endl;
	std::cout << phone_number << std::endl;
	std::cout << birthday << std::endl;
	std::cout << fav_meal << std::endl;
	std::cout << und_color << std::endl;
	std::cout << secret << std::endl;
}

void		Contact::print_formatted(int index)
{
	std::cout << std::setw(10);
	std::cout << index << " ";
	std::cout << firstname << std::endl;
}
