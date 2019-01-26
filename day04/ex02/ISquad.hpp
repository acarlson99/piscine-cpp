// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ISquad.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/25 19:38:14 by acarlson          #+#    #+#             //
//   Updated: 2019/01/25 19:39:59 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ISQUAD_HPP
# define ISQUAD_HPP

# include <iostream>
# include <string>

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif
