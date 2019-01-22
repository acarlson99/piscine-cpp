// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 07:41:53 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 07:58:48 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <string>

class Pony
{
public:
	int number;

	Pony( int n );
	Pony( void );
	~Pony( void );
	static Pony	*ponyOnTheHeap( int n );
	static Pony	*ponyOnTheStack( int n );
};
