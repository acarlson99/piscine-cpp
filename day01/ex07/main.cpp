// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/22 18:44:35 by acarlson          #+#    #+#             //
//   Updated: 2019/01/22 19:05:53 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " filename str1 str2" << std::endl;
		return (1);
	}
	std::ifstream inFile;
	inFile.open(argv[1]);
	if (!inFile)
	{
		std::cerr << "Unable to open file" << std::endl;
		return (1);
	}
	char buf[5000000];
	while (inFile >> buf)
		std::cout << buf;
}
