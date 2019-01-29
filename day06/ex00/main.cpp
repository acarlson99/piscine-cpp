/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 11:52:08 by acarlson          #+#    #+#             */
//   Updated: 2019/01/29 13:36:25 by acarlson         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
	num = atof(argv[1]);
	std::cout << num << std::endl;
	std::cout << (static_cast<char>(num)) << std::endl;
}
