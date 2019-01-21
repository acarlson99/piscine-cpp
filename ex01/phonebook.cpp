// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phonebook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/20 15:24:30 by acarlson          #+#    #+#             //
//   Updated: 2019/01/20 19:36:35 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Contact.hpp"

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

Contact new_contact()
{
	Contact boi;
	boi.firstname = "AAAAAAAAA";
	return (boi);
}

int			main(void)
{
	Contact arr[8];
	int i = 0;
	int n;
	int f;

	for (std::string line; std::getline(std::cin, line);)
	{
		f = 0;
		if (line == "ADD")
		{
			if (i >= 8)
			{
				std::cout << "Too many boys.  Ignoring input" << std::endl;
				continue ;
			}
			std::cout << "Gimme a name, dawg > ";
			std::getline(std::cin, line);
			arr[i].firstname = line;
			i++;
		}
		else if (line == "SEARCH")
		{
			for (int j = 0; j < i; j++)
				arr[j].print_formatted(j);
			std::cout << "Enter index" << std::endl;
			if (!getline(std::cin, line))
			{
				std::cout << "Uh oh" << std::endl;
				continue ;
			}
			for (int j = 0; line[j]; j++)
			{
				if (line[j] > '9' || line[j] < '0')
				{
					f = 1;
					break ;
				}
			}
			if (f)
			{
				std::cout << "Invalid string" << std::endl;
				continue;
			}
			n = std::atoi(line.c_str());
			if (n >= 8 || n < 0)
			{
				std::cout << "Invalid index" << std::endl;
				continue ;
			}
			arr[n].print();
		}
		else if (line == "EXIT")
			std::exit(0);
	}
}
