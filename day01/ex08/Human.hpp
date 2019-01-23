// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 20:23:40 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 23:28:48 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include <functional>
# include <vector>

typedef void(*funptr)(std::string const &s);

class Human {

public:
	void action(std::string const & action_name, std::string const & target);
	Human( std::string );
	Human( void );
	Human( Human const & cp);
	~Human( void );
private:
	std::vector<funptr> ftab;

	void meleeAttack(std::string const & target) const;
	void rangedAttack(std::string const & target) const;
	void intimidatingShout(std::string const & target) const;
	void fortnitedance( void ) const;
};

#endif
