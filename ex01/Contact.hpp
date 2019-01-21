// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phonebook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/20 15:48:33 by acarlson          #+#    #+#             //
//   Updated: 2019/01/20 19:46:38 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <iomanip>

class Phonebook
{
private:
	class Contact
	{
	public:
		;
	};
	std::vector<Contact> contacts;
	void search() const;
public:
	Phonebook();
	~Phonebook();
	void handle_input(const std::string& input);
};

// class Contact
// {
// public:
// 	std::string firstname;
// 	std::string lastname;
// 	std::string nickname;
// 	std::string login;
// 	std::string postal_address;
// 	std::string email_address;
// 	std::string phone_number;
// 	std::string birthday;
// 	std::string fav_meal;
// 	std::string und_color;
// 	std::string secret;

// 	void	print();
// 	void	print_formatted(int index);
// };
