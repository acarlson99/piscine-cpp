// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 14:16:53 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 15:39:57 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int main()
{
	try {
	Span		a(1);

	static_cast<void>(a);
	a.addNumber(9);
	Span		b(a);
//	b.addNumber(9);
	}
	catch (Span::BadSizeException &ex) {
		std::cout << "Use the good size 🅱️ ruh" << std::endl;
	}
}
