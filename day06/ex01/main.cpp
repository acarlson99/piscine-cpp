// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: acarlson <marvin@42.fr>                    +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2019/01/29 18:49:06 by acarlson          #+#    #+#             //
//   Updated: 2019/01/31 20:13:21 by acarlson         ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

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
		n[i] = g_str[mt_rand() % g_str.length()];
	for (; i < sizeof(int) + 8; i++)
	{
		n[i] = mt_rand() % CHAR_MAX;
		m |= n[i] << ABS(i - 8);
	}
	for (; i < 8 + 8 + sizeof(int); i++)
		n[i] = g_str[mt_rand() % g_str.length()];
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
	n = *reinterpret_cast<int *>(&s[i]);
	i += sizeof(int);
	for (; i < 8 + 8 + sizeof(int); i++)
		s2[a++] = s[i];
	d->s1 = s1;
	d->s2 = s2;
	d->n = n;
	return (d);
}

int main()
{
	void *raw = serialize();
	std::cout.write(static_cast<const char *>(raw), 20);
	Data *d = deserialize(raw);
	std::cout << std::endl;
	std::cout.write(reinterpret_cast<const char *>(d), sizeof(*d));
	std::cout << d->s1 << std::endl;
	std::cout << d->s2 << std::endl;
	std::cout << d->n << std::endl;
	std::cout << std::endl;
	Data *g = deserialize(serialize());
	std::cout << g->s1 << std::endl;
	std::cout << g->s2 << std::endl;
	std::cout << g->n << std::endl;
	std::cout << std::endl;
	Data *t = deserialize(serialize());
	std::cout << t->s1 << std::endl;
	std::cout << t->s2 << std::endl;
	std::cout << t->n << std::endl;
	std::cout << std::endl;
	Data *h = deserialize(serialize());
	std::cout << h->s1 << std::endl;
	std::cout << h->s2 << std::endl;
	std::cout << h->n << std::endl;
	return (0);
}
