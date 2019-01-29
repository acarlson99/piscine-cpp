// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 14:12:29 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 21:09:55 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form( std::string n, int gs, int ge ) throw(Form::GradeTooHighException, Form::GradeTooLowException) : _name(n), _signed(false), _gradeSign(gs), _gradeExec(ge) {
	if (gs > 150 || ge > 150)
		throw Form::GradeTooLowException();
	else if (gs < 1 || ge < 1)
		throw Form::GradeTooHighException();
}

Form::Form( void ) : _name("John"), _signed(false), _gradeSign(100), _gradeExec(100) { }
Form::Form( Form const & cp) : _name(cp._name), _signed(cp._signed), _gradeSign(cp._gradeSign), _gradeExec(cp._gradeExec) { }
Form::~Form( void ) { }

Form& Form::operator=( Form const &cp) {
	if (this != &cp)
	{
		this->_signed = cp._signed;
	}
	return (*this);
}

void				Form::beSigned( Bureaucrat const &b ) throw(Form::GradeTooLowException)
{
	if (b.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void				Form::action( Bureaucrat &f ) const throw(Form::GradeTooLowException)
{
	if (f.getGrade() > this->_gradeExec)
		throw Form::GradeTooLowException();
	else
		std::cout << "Executing " << this->_name << std::endl;
}

std::string const	&Form::getName( void ) const
{
	return (this->_name);
}

bool				Form::getSigned( void ) const
{
	return (this->_signed);
}

int					Form::getGradeSign( void ) const
{
	return (this->_gradeSign);
}

int					Form::getGradeExec( void ) const
{
	return (this->_gradeExec);
}

std::ostream		&operator<<( std::ostream &o, Form const &f )
{
	o << "Form " << f.getName() << " is " << (f.getSigned() ? "signed" : "unsigned") << ", requires a level " <<  f.getGradeSign() << " bureaucrat to sign it, and requires a level " << f.getGradeExec() << " grade bureaucrat to execute it";
	return (o);
}

Form::GradeTooHighException::GradeTooHighException( void ) { }
Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const & cp) { *this = cp; }
Form::GradeTooHighException::~GradeTooHighException( void ) throw() { }
Form::GradeTooHighException& Form::GradeTooHighException::operator=( GradeTooHighException const &) { return *this; }
const char* Form::GradeTooHighException::what( void ) const throw() {
	return "Grade too high";
}

Form::GradeTooLowException::GradeTooLowException( void ) { }
Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const & cp) { *this = cp; }
Form::GradeTooLowException::~GradeTooLowException( void ) throw() { }
Form::GradeTooLowException& Form::GradeTooLowException::operator=( GradeTooLowException const &) { return *this; }
const char* Form::GradeTooLowException::what( void ) const throw() {
	return "Grade too low";
}
