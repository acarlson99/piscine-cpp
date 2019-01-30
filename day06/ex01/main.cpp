/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:11:38 by acarlson          #+#    #+#             */
//   Updated: 2019/01/29 17:21:19 by acarlson         ###   ########.fr       //
/*                                                                            */
/* ************************************************************************** */

#include <random>
#include <iostream>

#define ABS(x) (x < 0 ? -x : x)

struct Data {
	std::string s1;
	int n;
	std::string s2;
};

std::mt19937	mt_rand(time(0));
std::string		g_str = "abcdefghijklmnopqrstuvwxyz0123456789";

void		*serialize( void )
{
	unsigned long i = 0;
	int				m = 0;
	char	*n = new char[sizeof(int) + sizeof(char) * 8 * 2];
	for (; i < 8; i++)
	{
		n[i] = g_str[mt_rand() % g_str.length()];
		std::cout << static_cast<char>(n[i]);
	}
	std::cout << std::endl;
	for (; i < sizeof(int) + 8; i++)
	{
		n[i] = mt_rand() % CHAR_MAX;
		m += n[i] << ABS(8 - 1);
		std::cout << static_cast<int>(n[i]) << " ";
	}
	std::cout << std::endl;
	for (; i < 8 + 8 + sizeof(int); i++)
	{
		n[i] = g_str[mt_rand() % g_str.length()];
		std::cout << static_cast<char>(n[i]);
	}
	std::cout << std::endl;
	std::cout << "M " << m << std::endl;
	return (n);
}

Data		*deserialize( void *raw)
{
	unsigned long i = 0;
	std::string	s1 = "00000000\0";
	std::string	s2 = "00000000\0";
	int			n = 0;
	int			a = 0;
	char *s = reinterpret_cast<char *>(raw);
	Data		*d = new Data;
	for (; i < 8; i++)
		s1[i] = s[i];
	for (; i < sizeof(int) + 8; i++)
		n += s[i] << ABS(8 - i);
	for (; i < 8 + 8 + sizeof(int); i++)
		s2[a++] = s[i];
	std::cout << "N " << n << std::endl;
	std::cout << "s1 " << s1 << std::endl << "s2 " << s2 << std::endl;
	d->s1 = s1;
	return (d);
}

int main()
{
	deserialize(serialize());
	return (0);
}
