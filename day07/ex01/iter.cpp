// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/30 12:32:52 by acarlson          #+#    #+#             //
//   Updated: 2019/01/30 15:37:28 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template<class T>
void		iter(T const *arr, int len, void (*f)(T))
{
	for (int i = 0; i < len; i++)
		f(arr[i]);
}

template<class T>
void		p(T const a)
{
	std::cout << a << std::endl;
}

int main()
{
	int				arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	std::string		a2[] = {"a", "bc", "def", "ghij", "klmno", "pqrstu"};

	iter(arr, 10, p);
	iter(a2, 6, p);
}
