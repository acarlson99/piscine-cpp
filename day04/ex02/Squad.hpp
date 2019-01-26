// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Squad.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 20:55:29 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 21:17:15 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include <string>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

public:
	Squad( void );
	Squad( Squad const & cp);
	~Squad( void );
	Squad& operator=( Squad const &);

	int				getCount( void ) const;
	ISpaceMarine	*getUnit( int ) const;
	int				push( ISpaceMarine * );

private:
	int				_boynum;
	ISpaceMarine	*_marine_arr[4096];

};

#endif
