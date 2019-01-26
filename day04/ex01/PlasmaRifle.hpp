// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PlasmaRifle.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 14:32:15 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 18:00:17 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include <string>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:
	PlasmaRifle( void );
	PlasmaRifle( PlasmaRifle const & cp);
	~PlasmaRifle( void );
	PlasmaRifle& operator=( PlasmaRifle const &);

	virtual void		attack() const;

private:
	static std::string	_dname;

};

#endif
