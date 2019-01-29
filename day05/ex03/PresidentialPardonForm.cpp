// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 21:54:28 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 21:56:46 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("Robotomy Request Form", 25, 5), _target(target) {
}
PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & cp) { *this = cp; }
PresidentialPardonForm::~PresidentialPardonForm( void ) { }
PresidentialPardonForm& PresidentialPardonForm::operator=( PresidentialPardonForm const &) { return *this; }

void		PresidentialPardonForm::action(Bureaucrat &executor) const throw(Form::GradeTooLowException)
{
	if (this->getSigned() && executor.getGrade() <= this->getGradeExec())
	{
		std::cout << this->_target << " pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else if (executor.getGrade() <  this->getGradeExec())
		throw Form::GradeTooLowException();
}
