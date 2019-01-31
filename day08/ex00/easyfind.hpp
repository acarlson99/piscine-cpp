// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   easyfind.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 20:15:33 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 21:12:22 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template<typename T>
unsigned		easyfind(T container, int n)
{
	for (auto it = std::begin(container); it != std::end(container); it++)
		if (*it == n)
			return (1);
	return (0);
}

#endif
