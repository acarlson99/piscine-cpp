// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 19:21:55 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 20:54:45 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <random>
# include "Form.hpp"

class RobotomyRequestForm : public Form {

public:
	RobotomyRequestForm( std::string );
	RobotomyRequestForm( void );
	RobotomyRequestForm( RobotomyRequestForm const & cp);
	~RobotomyRequestForm( void );
	RobotomyRequestForm& operator=( RobotomyRequestForm const &);

	void		action( Bureaucrat & ) const throw(Form::GradeTooLowException);

	static std::mt19937		mt_rand;

private:
	std::string const	_target;

};

#endif
