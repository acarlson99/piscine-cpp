// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutant.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 18:28:13 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 18:32:40 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include <string>
# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:
	SuperMutant( void );
	SuperMutant( SuperMutant const & cp);
	~SuperMutant( void );
	SuperMutant& operator=( SuperMutant const &);

	virtual void		takeDamage( int );

private:
	static std::string		_dtype;

};

#endif
