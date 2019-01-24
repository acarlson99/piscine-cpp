// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 14:07:19 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:11:11 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {

public:
	FragTrap( std::string );
	FragTrap( void );
	FragTrap( FragTrap const & cp);
	~FragTrap( void );
	FragTrap& operator=( FragTrap const &);

	void			meleeAttack(std::string const &target) const;
	void			rangedAttack(std::string const &target) const;
	void			vaulthunter_dot_exe(std::string const &target) const;

private:
	static std::string	_shoebox[10];
};

#endif
