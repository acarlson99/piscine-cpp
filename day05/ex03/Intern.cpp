// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 22:01:23 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 22:09:31 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

Intern::Intern( void ) { }
Intern::Intern( Intern const & cp) { *this = cp; }
Intern::~Intern( void ) { }
Intern& Intern::operator=( Intern const &) { return *this; }

Form		*Intern::makeForm( std::string type, std::string target ) const
{
	if (type == "Pardon")
	{
		std::cout << "Intern creates pardon form" << std::endl;
		return (new PresidentialPardonForm(target));
	}
	else if (type == "Shrub")
	{
		std::cout << "Intern creates shrub form" << std::endl;
		return (new ShrubberyCreationForm(target));
	}
	else if (type == "Robot")
	{
		std::cout << "Intern creates robot form" << std::endl;
		return (new RobotomyRequestForm(target));
	}
	else
		std::cout << "Invalid type" << std::endl;
	return (NULL);
}
