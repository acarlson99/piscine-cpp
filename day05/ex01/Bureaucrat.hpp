// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 11:44:52 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 15:24:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat {

public:
	class GradeTooHighException : public std::exception {
	public:
		GradeTooHighException( void );
		GradeTooHighException( GradeTooHighException const & cp);
		~GradeTooHighException( void ) throw();
		GradeTooHighException& operator=( GradeTooHighException const & e);
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception {
	public:
		GradeTooLowException( void );
		GradeTooLowException( GradeTooLowException const & cp);
		~GradeTooLowException( void ) throw();
		GradeTooLowException& operator=( GradeTooLowException const & e);
		virtual const char* what() const throw();
	};

	Bureaucrat( std::string n, int g ) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
	Bureaucrat( void );
	Bureaucrat( Bureaucrat const & cp);
	virtual ~Bureaucrat( void );
	Bureaucrat& operator=( Bureaucrat const &);

	void				signForm( Form &f ) throw(Bureaucrat::GradeTooLowException);

	std::string const	&getName( void ) const;
	int					getGrade( void ) const;

	void				incGrade( void ) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);
	void				decGrade( void ) throw(Bureaucrat::GradeTooHighException, Bureaucrat::GradeTooLowException);

private:
	std::string const	_name;
	int					_grade;

};

std::ostream		&operator<<( std::ostream &o, Bureaucrat const &b );

#endif
