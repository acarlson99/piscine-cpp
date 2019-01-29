// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/28 16:07:00 by acarlson          #+#    #+#             //
//   Updated: 2019/01/28 16:51:15 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form {

public:
	ShrubberyCreationForm( std::string );
	ShrubberyCreationForm( ShrubberyCreationForm const & cp);
	~ShrubberyCreationForm( void );
	ShrubberyCreationForm& operator=( ShrubberyCreationForm const &);

	void		action( void ) const;

private:
	std::string const	_target;

};

#endif
