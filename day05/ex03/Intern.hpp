// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 22:01:16 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 22:08:40 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Form.hpp"

class Intern {

public:
	Intern( void );
	Intern( Intern const & cp);
	~Intern( void );
	Intern& operator=( Intern const &);

	Form		*makeForm( std::string, std::string ) const;

private:

};

#endif
