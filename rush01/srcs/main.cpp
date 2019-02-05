#include <iostream>
#include <fstream>
#include <sys/utsname.h>
#include "IMonitorModule.hpp"
#include "IMonitorDisplay.hpp"
#include "HnameUnameMod.hpp"
#include "DateTimeMod.hpp"
#include "OSInfoMod.hpp"
#include "CPUMod.hpp"
#include "NetworkMod.hpp"
#include "RAMMod.hpp"
#include <unistd.h>
#include <vector>
#include <algorithm>
#include "Window.hpp"

#define DELAY 2500000

	static const char *g_string[] =
		{
			"hostname",
			"username",
			"osinfo",
			"datetime",
			"cpu",
			"ram",
			"network",
			"pony",
			"gui",
			nullptr};

static const int			tab[] =
{
	HUNAME,
	HUNAME,
	OSINFO,
	DATETIME,
	CPU,
	RAM,
	NETWORK,
	PONY,
	GUI,
	0
};

int			parse_args(int argc, char **argv)
{
	static_cast<void>(tab);
	int		modules = 0;
	int j;
	for (int i = 1; i < argc; i++)
	{
		for (j = 0; g_string[j] != nullptr ; j++)
			if (!strcmp(argv[i], g_string[j]))
			{
				modules |= tab[j];
				break ;
			}
		if (!tab[j])
		{
			std::cout << "Invalid option: " << argv[i] << std::endl;
			std::cout << "Usage: ./ft_gkrelm [hostname username osinfo datetime cpu ram network pony]" << std::endl;
			std::exit(1);
		}
	}
	return (modules);
}

void		logErr( const char *s )
{
	std::fstream		ofs;
	ofs.open("err.log");
	if (ofs.is_open())
	{
		ofs << s << std::endl;
		ofs.close();
	}
	else
		std::cerr << "Unable to open error file" << std::endl;
}

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cerr << "Give arguments" << std::endl; std::exit(1);
	}
	else if (argc > 2)
	{
		std::cerr << "Too many arguments!" << std::endl; std::exit(1);
	}
	int modules = parse_args(argc, argv);

	system("rm -f err.log");

	std::vector<Window *>		wins;

	initscr();
	cbreak();
	curs_set(0);
	noecho();
	wtimeout(stdscr, 0);

	int ht, wd;

	getmaxyx(stdscr, ht, wd);

	IMonitorModule	*tmp;
	int				lines;
	int				totalLines = 0;
	std::string		s;

	while (modules)
	{
		int n = 1;
		while (!(n & modules))
			n <<= 1;

		if (n == DATETIME)
			tmp = new DateTimeMod();
		else if (n == OSINFO)
			tmp = new OSInfoMod();
		else if (n == CPU)
			tmp = new CPUMod();
		else if (n == RAM)
			tmp = new RAMMod();
		else if (n == NETWORK)
			tmp = new NetworkMod();
		else if (n == HUNAME)
			tmp = new HnameUnameMod();
		s = tmp->toString();
		lines = std::count(s.begin(), s.end(), '\n');

		wins.push_back(new Window(lines, wd - 1, totalLines, 0));
		wins.back()->setMod(tmp);
		totalLines += lines;
		modules &= ~n;
	}

	clock_t _ct = clock();
	while (1)
	{
		_ct = clock();
		for (unsigned long i = 0; i < wins.size(); i++)
		{
			wins[i]->updateMod();
			wins[i]->printMod();
		}
		for (unsigned long i = 0; i < wins.size(); i++)
			wrefresh(wins[i]->get_win());
		_ct = clock() - _ct;
		if (getch() == 'q')
		{
			endwin();
			std::exit(0);
		}
		usleep(DELAY - _ct);
	}
}
