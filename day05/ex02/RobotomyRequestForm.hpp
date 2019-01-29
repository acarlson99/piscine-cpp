// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 19:21:55 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 19:24:29 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm( std::string );
	RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const & cp);
	~RobotomyRequestForm( void );
	RobotomyRequestForm& operator=( RobotomyRequestForm const &);

	void		action( Bureaucrat & ) const throw(Form::GradeTooLowException);

private:

};

#endif
