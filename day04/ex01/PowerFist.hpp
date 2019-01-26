// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PowerFist.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 18:00:29 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 18:01:05 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PowerFist : public AWeapon {

public:
	PowerFist( void );
	PowerFist( PowerFist const & cp);
	~PowerFist( void );
	PowerFist& operator=( PowerFist const &);

	virtual void		attack() const;

private:
	static std::string	_dname;

};

#endif
