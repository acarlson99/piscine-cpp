// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/24 08:40:02 by acarlson          #+#    #+#             //
//   Updated: 2019/01/24 21:10:00 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTAG_HPP
# define FRAGTAG_HPP

# include <iostream>
# include <string>
# include <random>
# include "ClapTrap.hpp"

# ifndef MAX
#  define MAX(a,b) (a > b ? a : b)
# endif
# ifndef MIN
#  define MIN(a,b) (a < b ? a : b)
# endif

class FragTrap : virtual public ClapTrap {

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
	static std::string	_hunterAttacks[10];
};

#endif
