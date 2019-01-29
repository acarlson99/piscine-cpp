// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 21:53:19 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 21:54:22 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form {

public:
	PresidentialPardonForm( std::string );
	PresidentialPardonForm( void );
	PresidentialPardonForm( PresidentialPardonForm const & cp);
	~PresidentialPardonForm( void );
	PresidentialPardonForm& operator=( PresidentialPardonForm const &);

	void		action( Bureaucrat & ) const throw(Form::GradeTooLowException);

private:
	std::string const	_target;

};

#endif
