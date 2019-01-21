// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: john <marvin@42.fr>                        +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/20 21:02:15 by john              #+#    #+#             //
//   Updated: 2019/01/20 23:13:22 by john             ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	i = 0;
}

void		Phonebook::add()
{
	std::string		line;

	if (i >= 8)
	{
		std::cout << "TOO MANY BOYS" << std::endl;
		return ;
	}
	std::cout << "Enter firstname: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].firstname = line;
	std::cout << "Enter lastname: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].lastname = line;
	std::cout << "Enter nickname: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].nickname = line;
	std::cout << "Enter login: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].login = line;
	std::cout << "Enter postal_address: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].postal_address = line;
	std::cout << "Enter email_address: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].email_address = line;
	std::cout << "Enter phone_number: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].phone_number = line;
	std::cout << "Enter birthday: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].birthday = line;
	std::cout << "Enter fav_meal: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].fav_meal = line;
	std::cout << "Enter und_color: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].und_color = line;
	std::cout << "Enter secret: ";
	if (!getline(std::cin, line))
		std::exit(0);
	contacts[i].secret = line;
	++i;
}

void		Phonebook::print_single(Contact c) const
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

void		print_nine(std::string s)
{
	for (int i = 0; i < 9; i++)
		std::cout << (char)s[i];
	std::cout << ".";
}

void		print_stuff(int index, std::string first, std::string last, std::string nick)
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

void		Phonebook::print_all() const
{
	print_stuff(-1, "FIRST", "LAST", "NICK");
	for (int j = 0; j < i; j++)
		print_stuff(j, contacts[j].firstname, contacts[j].lastname, contacts[j].nickname);
}

void		Phonebook::search() const
{
	std::string		line;
	int				n;

	if (i == 0)
	{
		std::cout << "There are no boys in your boy book" << std::endl;
		return ;
	}
	print_all();
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
	if (n >= i || n < 0 || !line[0])
	{
		std::cout << "Invalid index" << std::endl;
		return ;
	}
	print_single(contacts[n]);
}

void		Phonebook::handle_input(const std::string& line)
{
	if (line == "EXIT")
		std::exit(0);
	else if (line == "ADD")
		add();
	else if (line == "SEARCH")
		search();
	else if (line == "I")
		std::cout << i << std::endl;
}
