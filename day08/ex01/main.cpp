// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 14:16:53 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 15:11:35 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int main()
{
	try {
		Span		a(3);

		static_cast<void>(a);
		a.addNumber(9);
		Span		b(a);
		b.addNumber(1);
		std::cout << "Longest: " << b.longestSpan() << std::endl;
		std::cout << "Shortest: " << b.shortestSpan() << std::endl;
		b.addNumber(7);
		std::cout << "Longest: " << b.longestSpan() << std::endl;
		std::cout << "Shortest: " << b.shortestSpan() << std::endl;
	}
	catch (Span::BadSizeException &ex) {
		std::cout << "Use the good size 🅱️ ruh" << std::endl;
	}
}
