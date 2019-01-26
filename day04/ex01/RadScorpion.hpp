// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RadScorpion.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 18:41:10 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 18:41:46 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:
	RadScorpion( void );
	RadScorpion( RadScorpion const & cp);
	~RadScorpion( void );
	RadScorpion& operator=( RadScorpion const &);

	virtual void		takeDamage( int );

private:
	static std::string		_dtype;

};

#endif
