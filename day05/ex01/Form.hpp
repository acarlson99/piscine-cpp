// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 14:12:36 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 15:24:20 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

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

	Form( std::string n, int gs, int ge ) throw(Form::GradeTooHighException, Form::GradeTooLowException);
	Form( std::string n, int g ) throw(Form::GradeTooHighException, Form::GradeTooLowException);
	Form( void );
	Form( Form const & cp);
	virtual ~Form( void );
	Form& operator=( Form const &);

	void				beSigned( Bureaucrat const &b ) throw(Form::GradeTooLowException);

	std::string const	&getName( void ) const;
	bool				getSigned( void ) const;
	int					getGradeSign( void ) const;
	int					getGradeExec( void ) const;

	void				sign( void ) throw(Form::GradeTooHighException, Form::GradeTooLowException);

private:
	std::string const	_name;
	bool				_signed;
	int const			_gradeSign;
	int const			_gradeExec;

};

std::ostream		&operator<<( std::ostream &o, Form const &f );

#endif
