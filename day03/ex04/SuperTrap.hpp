// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 14:33:42 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:38:42 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {

public:
	SuperTrap( std::string );
	SuperTrap( void );
	SuperTrap( SuperTrap const & cp);
	~SuperTrap( void );
	SuperTrap& operator=( SuperTrap const &);

	void			meleeAttack(std::string const &target) const;
	void			rangedAttack(std::string const &target) const;
	void			ninjaShoebox(FragTrap const &target) const;
	void			ninjaShoebox(ScavTrap const &target) const;

private:
	static std::string	_shoebox[3];
};

#endif
