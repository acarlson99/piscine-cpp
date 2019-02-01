// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 16:07:31 by acarlson          #+#    #+#             //
//   Updated: 2019/02/01 11:59:37 by acarlson         ###   ########.fr       //
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

void	addInstruction(std::vector<AInstruction *>& v, char c)
{
	static_cast<void>(v);
	if (c == '[')
		v.push_back(new OpeningBracket());
	else if (c == ']')
		v.push_back(new ClosingBracket());
	else if (c == '.')
		v.push_back(new Out());
	else if (c == '<')
		v.push_back(new PtrDec());
	else if (c == '>')
		v.push_back(new PtrInc());
	else if (c == '-')
		v.push_back(new ValDec());
	else if (c == '+')
		v.push_back(new ValInc());
	else if (c == ',')
		v.push_back(new TakeInput());
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
	std::vector<AInstruction *>	instructions;
	unsigned long				i = 0;
	std::fstream				fin(argv[1]);
	char						c;
	std::string					valid = ".,[]+-<>";
	int							j;

	while (fin.get(c))
		if (valid.find_first_of(c) != std::string::npos)
			addInstruction(instructions, c);
	fin.close();
	std::cout << std::endl;
	while (i < instructions.size())
	{
		instructions[i]->execute(tape, instructions, &i, &j);
		++i;
	}
	return (0);
}
