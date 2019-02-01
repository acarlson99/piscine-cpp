// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 16:07:31 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 21:49:16 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <fstream>
#include "OpeningBracket.hpp"
#include "ClosingBracket.hpp"
#include "Out.hpp"
#include "PtrInc.hpp"
#include "PtrDec.hpp"
#include "ValInc.hpp"
#include "ValDec.hpp"
#include "TakeInput.hpp"

void	addInstruction(std::vector<AInstruction>& v, char c)
{
	static_cast<void>(v);
	if (c == '[')
		v.push_back(OpeningBracket());
	if (c == ']')
		v.push_back(ClosingBracket());
	if (c == '.')
		v.push_back(Out());
	if (c == '<')
		v.push_back(PtrDec());
	if (c == '>')
		v.push_back(PtrInc());
	if (c == '-')
		v.push_back(ValDec());
	if (c == '+')
		v.push_back(ValInc());
	if (c == ',')
		v.push_back(TakeInput());
	std::cout << c;
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "usage: " << argv[0] << " filename" << std::endl;
		return (1);
	}
	static int					tape[4096] = { 0 };
	static_cast<void>(tape);
	std::vector<AInstruction>	instructions;
	int							i;
	static_cast<void>(i);
	std::fstream				fin(argv[1]);
	char						c;
	std::string					valid = ".,[]+-<>";

	while (fin.get(c))
		if (valid.find_first_of(c) != std::string::npos)
			addInstruction(instructions, c);
	fin.close();
	return (0);
}
