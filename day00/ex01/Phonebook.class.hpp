// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Phonebook.class.hpp                                :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/21 09:23:09 by acarlson          #+#    #+#             //
//   Updated: 2019/01/21 09:32:08 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Phonebook
{
private:
	class Contact
	{
	public:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday;
		std::string fav_meal;
		std::string und_color;
		std::string secret;
	};
	Contact	contacts[8];
	int		i;

	void	add();
	void	search() const;
	void	print_single(Contact c) const;
	void	print_all() const;
public:
	Phonebook();
	void	handle_input(const std::string& input);
};

#endif
