// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClosingBracket.cpp                                 :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/31 20:19:50 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 21:20:13 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClosingBracket.hpp"

ClosingBracket::ClosingBracket( std::string ) { }
ClosingBracket::ClosingBracket( void ) { }
ClosingBracket::ClosingBracket( ClosingBracket const & cp) { *this = cp; }
ClosingBracket::~ClosingBracket( void ) { }
ClosingBracket& ClosingBracket::operator=( ClosingBracket const &) { return *this; }

void		ClosingBracket::execute(int tape[INT_MAX], std::vector<AInstruction>, int *, int *)
{
	std::cout << "]" << std::endl;
}
