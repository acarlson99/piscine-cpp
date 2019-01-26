// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   TacticalMarine.hpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 20:27:48 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 20:50:51 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include <string>
# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine {

public:
	TacticalMarine( void );
	TacticalMarine( TacticalMarine const & cp);
	~TacticalMarine( void );
	TacticalMarine& operator=( TacticalMarine const &);

	TacticalMarine		*clone( void ) const;
	void				battleCry( void ) const;
	void				rangedAttack( void ) const;
	void				meleeAttack( void ) const;

private:

};

#endif
