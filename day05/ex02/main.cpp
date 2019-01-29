// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 11:44:36 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 17:59:08 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat jim = Bureaucrat("Jim", 20);

	Bureaucrat tim;

	tim = jim;

	std::cout << jim << std::endl;
	std::cout << tim << std::endl;
	try {
		tim = Bureaucrat("Thomas", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Grade too high" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Grade too low" << std::endl;
	}
	try {
		tim = Bureaucrat("Thomas", 149);
		std::cout << tim << " created" << std::endl;
		tim.decGrade();
		std::cout << tim << " grade incremented" << std::endl;
		tim.decGrade();
		std::cout << tim << " grade decremented" << std::endl;
		tim.decGrade();
		std::cout << tim << " grade decremented" << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << "Grade too high" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Grade too low" << std::endl;
	}
	try {
		while (1)
			tim.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << tim << " grade too high.  Cannot raise it further" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << "Grade too low" << std::endl;
	}

	try {
		Form f = Form("BILL", 17, 330);
	}
	catch (Form::GradeTooHighException) {
		std::cout << "Grade too high" << std::endl;
	}
	catch (Form::GradeTooLowException) {
		std::cout << "Grade too low" << std::endl;
	}
	Form f = Form("bill", 17, 30);

	std::cout << f << std::endl;
	jim.signForm(f);
	std::cout << f << std::endl;

	Bureaucrat tom = Bureaucrat("tom", 10);
	tom.signForm(f);
	std::cout << f << std::endl;

	ShrubberyCreationForm scf = std::string("output");

	tom.signForm(scf);
	tom.executeForm(scf);
	std::cout << tom << f << std::endl;
}
