// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 13:42:03 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 13:42:10 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon {

public:
	AWeapon( std::string );
	AWeapon( void );
	AWeapon( AWeapon const & cp);
	~AWeapon( void );
	AWeapon& operator=( AWeapon const &);

private:

};

#endif
