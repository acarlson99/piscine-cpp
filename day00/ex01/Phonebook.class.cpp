// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.class.cpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/21 09:22:55 by acarlson          #+#    #+#             //
//   Updated: 2019/01/21 10:05:38 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.class.hpp"

Phonebook::Phonebook()
{
	_i = 0;
}

void		Phonebook::_add()
{
	std::string		line;

	if (_i >= 8)
	{
		std::cout << "TOO MANY BOYS" << std::endl;
		return ;
	}
	std::cout << "Enter firstname: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].firstname = line;
	std::cout << "Enter lastname: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].lastname = line;
	std::cout << "Enter nickname: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].nickname = line;
	std::cout << "Enter login: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].login = line;
	std::cout << "Enter postal_address: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].postal_address = line;
	std::cout << "Enter email_address: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].email_address = line;
	std::cout << "Enter phone_number: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].phone_number = line;
	std::cout << "Enter birthday: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].birthday = line;
	std::cout << "Enter fav_meal: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].fav_meal = line;
	std::cout << "Enter und_color: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].und_color = line;
	std::cout << "Enter secret: ";
	if (!getline(std::cin, line))
		std::exit(0);
	_contacts[_i].secret = line;
	++_i;
}

void		Phonebook::_print_single(Contact c) const
{
	std::cout << c.firstname << std::endl;
	std::cout << c.lastname << std::endl;
	std::cout << c.nickname << std::endl;
	std::cout << c.login << std::endl;
	std::cout << c.postal_address << std::endl;
	std::cout << c.email_address << std::endl;
	std::cout << c.phone_number << std::endl;
	std::cout << c.birthday << std::endl;
	std::cout << c.fav_meal << std::endl;
	std::cout << c.und_color << std::endl;
	std::cout << c.secret << std::endl;
}

/*
|         0| Firstname|  Lastname|  Nickname|
*/

static void	print_nine(std::string s)
{
	for (int i = 0; i < 9; i++)
		std::cout << (char)s[i];
	std::cout << ".";
}

void		_print_stuff(int index, std::string first, std::string last, std::string nick)
{
	std::cout << "|";
	std::cout << std::setw(10);
	if (index == -1)
		std::cout << "Index" << "|";
	else
		std::cout << index << "|";
	if (first.length() >= 10)
		print_nine(first);
	else
	{
		std::cout << std::setw(10);
		std::cout << first;
	}
	std::cout << "|";
	if (last.length() >= 10)
		print_nine(last);
	else
	{
		std::cout << std::setw(10);
		std::cout << last;
	}
	std::cout << "|";
	if (nick.length() >= 10)
		print_nine(nick);
	else
	{
		std::cout << std::setw(10);
		std::cout << nick;
	}
	std::cout << "|" << std::endl;
}

void		Phonebook::_print_all() const
{
	_print_stuff(-1, "FIRST", "LAST", "NICK");
	for (int j = 0; j < _i; j++)
		_print_stuff(j, _contacts[j].firstname, _contacts[j].lastname, _contacts[j].nickname);
}

void		Phonebook::_search() const
{
	std::string		line;
	int				n;

	if (_i == 0)
	{
		std::cout << "There are no boys in your boy book" << std::endl;
		return ;
	}
	_print_all();
	std::cout << "Enter index: ";
	if (!(getline(std::cin, line)))
		std::exit(0);
	for (int j = 0; line[j]; j++)
		if (line[j] > '9' || line[j] < '0')
		{
			std::cout << "Invalid index" << std::endl;
			return ;
		}
	n = std::atoi(line.c_str());
	if (n >= _i || n < 0 || !line[0])
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	_print_single(_contacts[n]);
}

void		Phonebook::handle_input(const std::string& line)
{
	if (line == "EXIT")
		std::exit(0);
	else if (line == "ADD")
		_add();
	else if (line == "SEARCH")
		_search();
}
