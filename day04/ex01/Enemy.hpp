// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 18:05:45 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 18:26:07 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>

class Enemy {

public:
	Enemy( int hp, std::string const &type );
	Enemy( void );
	Enemy( Enemy const & cp);
	virtual ~Enemy( void );
	Enemy& operator=( Enemy const &);

	std::string const		&getType( void ) const;
	int						getHP( void ) const ;

	virtual void			takeDamage( int );

protected:
	virtual void			deathMsg( void ) const;

	int						_HP;
	std::string const		&_type;

private:
	static std::string	_dtype;

};

#endif
