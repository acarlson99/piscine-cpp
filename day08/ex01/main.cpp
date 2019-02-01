// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 14:16:53 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 15:26:19 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int main()
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	try {
		Span		a(15);

		static_cast<void>(a);
		a.addNumber(9);
		std::cout << "Added 9" << std::endl;
		Span		b(a);
		b.addNumber(1);
		std::cout << "Longest: " << b.longestSpan() << std::endl;
		std::cout << "Shortest: " << b.shortestSpan() << std::endl;
		b.addNumber(7);
		std::cout << "Longest: " << b.longestSpan() << std::endl;
		std::cout << "Shortest: " << b.shortestSpan() << std::endl;
		b.addNumber(19, 30);
		std::cout << "Longest: " << b.longestSpan() << std::endl;
		std::cout << "Shortest: " << b.shortestSpan() << std::endl;
		b.addNumber(8);
	}
	catch (Span::BadSizeException &ex) {
		std::cout << "Use the good size 🅱️ ruh" << std::endl;
	}
	try {
		Span a(10000000);
		a.addNumber(1, 10000000);
		std::cout << "Longest: " << a.longestSpan() << std::endl;
		std::cout << "Shortest: " << a.shortestSpan() << std::endl;
	}
	catch (Span::BadSizeException &ex) {
		std::cout << "Bad size found owo" << std::endl;
	}
}
