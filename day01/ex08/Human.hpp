// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 20:23:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/23 18:23:54 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>

class Human {

public:
	void action(std::string const & action_name, std::string const & target);
	Human( std::string );
	Human( void );
	Human( Human const & cp);
	~Human( void );

private:
	void meleeAttack(std::string const & target) ;
	void rangedAttack(std::string const & target) ;
	void intimidatingShout(std::string const & target) ;
	void fortnitedance(std::string const & target);
};

#endif
