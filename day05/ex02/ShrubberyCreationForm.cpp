// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 16:09:22 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 21:41:48 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : Form("Shrubbery Creation Form", 145, 137), _target(target) { }
ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & cp) { *this = cp; }
ShrubberyCreationForm::~ShrubberyCreationForm( void ) { }
ShrubberyCreationForm& ShrubberyCreationForm::operator=( ShrubberyCreationForm const &) { return *this; }

void		ShrubberyCreationForm::action(Bureaucrat &executor) const throw(Form::GradeTooLowException)
{
	if (!(executor.getGrade() > this->getGradeExec()) && this->getSigned())
	{
		std::string filename = _target + "_shrubbery";

		std::ofstream ofs;

		ofs.open(filename.c_str(), std::ios::out);
		if (!ofs.is_open())
		{
			std::cout << "File open error" << std::endl;
			return ;
		}
		ofs << "      /\\						" << std::endl;
		ofs << "     /\\*\\						" << std::endl;
		ofs << "    /\\O\\*\\					" << std::endl;
		ofs << "   /*/\\/\\/\\					" << std::endl;
		ofs << "  /\\O\\/\\*\\/\\				" << std::endl;
		ofs << " /\\*\\/\\*\\/\\/\\				" << std::endl;
		ofs << "/\\O\\/\\/*/\\/O/\\				" << std::endl;
		ofs << "      ||						" << std::endl;
		ofs << "      ||						" << std::endl;
		ofs << "      ||						" << std::endl;
	}
	else if (this->getSigned())
		throw Form::GradeTooLowException();
}
