// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/20 13:42:02 by acarlson          #+#    #+#             //
//   Updated: 2019/01/20 15:25:14 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(int argc, char **argv)
{
	int f = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < argc; i++)
	{
		for (int j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				std::cout << (unsigned char)std::toupper(argv[i][j]);
			else
				std::cout << argv[i][j];
			f = 1;
		}
	}
	if (f)
		std::cout << std::endl;
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}
