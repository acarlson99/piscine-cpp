/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 20:32:16 by acarlson          #+#    #+#             */
//   Updated: 2019/01/28 21:57:29 by acarlson         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

std::mt19937		RobotomyRequestForm::mt_rand(time(0));

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("Robotomy Request Form", 72, 45), _target(target) {
}
RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & cp) { *this = cp; }
RobotomyRequestForm::~RobotomyRequestForm( void ) { }
RobotomyRequestForm& RobotomyRequestForm::operator=( RobotomyRequestForm const &) { return *this; }

void		RobotomyRequestForm::action(Bureaucrat &executor) const throw(Form::GradeTooLowException)
{
	if (this->getSigned() && executor.getGrade() <= this->getGradeExec())
	{
		std::cout << "*whirr* *clank* ";
		if (RobotomyRequestForm::mt_rand() % 2 == 1)
			std::cout << "Robotomy on " << this->_target << " succeded!" << std::endl;
		else
			std::cout << "Yikes.  Robotomy failed.  Good luck, " << this->_target << std::endl;
	}
	else if (executor.getGrade() <  this->getGradeExec())
		throw Form::GradeTooLowException();
}
