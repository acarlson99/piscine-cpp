// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AssaultTerminator.hpp                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 20:51:28 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 20:52:07 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine {

public:
	AssaultTerminator( void );
	AssaultTerminator( AssaultTerminator const & cp);
	~AssaultTerminator( void );
	AssaultTerminator& operator=( AssaultTerminator const &);

	AssaultTerminator		*clone( void ) const;
	void				battleCry( void ) const;
	void				rangedAttack( void ) const;
	void				meleeAttack( void ) const;

private:

};

#endif
