// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 20:15:33 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 18:03:23 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
unsigned long	easyfind(T c, int n) throw(std::exception)
{
	// return (std::find(c.begin(), c.end(), n) != c.end());
	typename T::iterator	a = std::find(c.begin(), c.end(), n);
	if (a == c.end())
		throw std::exception();
	return (*a);
}

#endif
