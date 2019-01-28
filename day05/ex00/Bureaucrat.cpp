// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 11:44:31 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 13:38:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( std::string n, int g ) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException) : _name(n) {
	_grade = g;
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (g < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( void ) : _name("John"), _grade(100) { }
Bureaucrat::Bureaucrat( Bureaucrat const & cp) : _name(cp._name), _grade(cp._grade) { }
Bureaucrat::~Bureaucrat( void ) { }

Bureaucrat& Bureaucrat::operator=( Bureaucrat const &cp) {
	if (this != &cp)
	{
		this->_grade = cp._grade;
	}
	return (*this);
}

std::string const	&Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void				Bureaucrat::incGrade( void ) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException)
{
	if (_grade - 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		--_grade;
}

void				Bureaucrat::decGrade( void ) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException)
{
	if (_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade + 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		++_grade;
}

std::ostream		&operator<<( std::ostream &o, Bureaucrat const &b )
{
	o << b.getName() << " bureaucrat _grade " <<  b.getGrade();
	return (o);
}

Bureaucrat::GradeTooHighException::GradeTooHighException( void ) { }
Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException const & cp) { *this = cp; }
Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw() { }
Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=( GradeTooHighException const &) { return *this; }
const char* Bureaucrat::GradeTooHighException::what( void ) const throw() {
	return "Grade too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException( void ) { }
Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const & cp) { *this = cp; }
Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw() { }
Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=( GradeTooLowException const &) { return *this; }
const char* Bureaucrat::GradeTooLowException::what( void ) const throw() {
	return "Grade too low";
}
