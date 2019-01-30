/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 11:52:08 by acarlson          #+#    #+#             */
//   Updated: 2019/01/29 16:08:50 by acarlson         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <math.h>

/*
** static - Similar to c casting I think
** dynamic - Evaluated at runtime
** reinterpret - Just reinterpret the raw bits
** const - can remove const qualifier DO NOT USE THIS TOO MUCH
*/

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of parameters" << std::endl;
		return (0);
	}
	double		num;
	std::string	s = argv[1];
	if (s.length() == 1 && !(s[0] >= '0' && s[0] <= '9'))
		num = static_cast<double>(s[0]);
	else
		num = atof(argv[1]);
	char	numc = static_cast<char>(num);
	std::cout << "char: ";
	if ((s == "nan") || (s == "-inf") || (s == "+inf") || (num > INT_MAX) || isnan(num))
		std::cout << "impossible" << std::endl;
	else if (num < 040 || num > 126)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << numc << std::endl;
	int		numi = static_cast<int>(num);
	std::cout << "int: ";
	if ((s == "nan") || (s == "-inf") || (s == "+inf") || (num > INT_MAX) || isnan(num))
		std::cout << "impossible" << std::endl;
	else
		std::cout << numi << std::endl;
	float	numf = static_cast<float>(num);
	std::cout << "float: ";
	std::cout << numf << (numi == numf ? ".0" : "") << "f" << std::endl;
	std::cout << "double: ";
	std::cout << num << (numi == numf ? ".0" : "") << std::endl;
}
