// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/21 08:50:45 by acarlson          #+#    #+#             //
//   Updated: 2019/01/21 09:23:30 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.class.hpp"

/*
** EXIT: quit program
** ADD: prompt user to input new contact's info, one field at a time, until every field is accounted for
**		firstname, lastname, nickname, login, postal address, email adress, phone number, birthday, favorite meal, underwear color, darkest secret
**		Contact MUST be represented as a class
** SEARCH: display list of available non-empty contacts in 4 columns
**		index, first name, last name, nickname
**		Each column must be 10 chars wide, right aligned, separated by '|'
**		Any output longer than the column's width is truncated and the last displayable character is replaced by a '.'
**		Then the program will prompt again for the index of the desired entry and display the contact's information, one field per line
**		If input is bananas, define relavent behavior
** all other input is discarded
*/

int		main()
{
	Phonebook	book;
	std::cout << "> ";
	for (std::string line; std::getline(std::cin, line);)
	{
		book.handle_input(line);
		std::cout << "> ";
	}
}
