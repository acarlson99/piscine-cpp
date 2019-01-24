// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 14:07:19 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 14:21:37 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <string>
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap {

public:
	NinjaTrap( std::string );
	NinjaTrap( void );
	NinjaTrap( NinjaTrap const & cp);
	~NinjaTrap( void );
	NinjaTrap& operator=( NinjaTrap const &);

	void			meleeAttack(std::string const &target) const;
	void			rangedAttack(std::string const &target) const;
	void			ninjaShoebox(FragTrap const &target) const;
	void			ninjaShoebox(ScavTrap const &target) const;

private:
	static std::string	_shoebox[3];
};

#endif
