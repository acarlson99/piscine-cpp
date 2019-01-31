// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 20:15:33 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 12:11:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
unsigned		easyfind(T c, int n)
{
	return (std::find(c.begin(), c.end(), n) != c.end());
}

#endif
