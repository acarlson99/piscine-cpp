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

#define DELAY 1000000

static const char	*g_string[] =
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
	nullptr
};

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

void		logErr( const char *s )	// TODO: why tf does this not work
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
	int modules = parse_args(argc, argv);
	std::cout << modules << std::endl;
	static_cast<void>(modules);

	system("rm -f err.log");
	OSInfoMod		os;
	std::cout << "[1]  " << std::endl;
	os.printInfo();
	os.updateInfo();
	std::cout << "[2]  " << std::endl;
	os.printInfo();

	std::cout << std::endl;

	HnameUnameMod	a;

	std::cout << "[3]  " << std::endl;
	a.printInfo();
	a.updateInfo();
	std::cout << "[4]  " << std::endl;
	a.printInfo();

	std::cout << std::endl;

	DateTimeMod d;
	std::cout << "[5]  " << std::endl;
	d.printInfo();
	d.updateInfo();
	std::cout << "[6]  " << std::endl;
	d.printInfo();

	std::cout << std::endl;

	CPUMod		cpu;
	std::cout << "[7]  " << std::endl;
	cpu.printInfo();
	cpu.updateInfo();
	std::cout << "[8]  " << std::endl;
	cpu.printInfo();

	std::cout << std::endl;

	RAMMod		ram;
	std::cout << "[9]  " << std::endl;
	ram.printInfo();
	ram.updateInfo();
	std::cout << "[10] " << std::endl;
	ram.printInfo();

	std::cout << std::endl;

	NetworkMod	net;
	std::cout << "[11] " << std::endl;
	net.printInfo();
	net.updateInfo();
	std::cout << "[12] " << std::endl;
	net.printInfo();

	std::cout << std::endl;

	clock_t _ct = clock();
	while (1) {
		_ct = clock();
		std::cout << "Time" << std::endl;
		d.updateInfo();
		d.printInfo();
		std::cout << "CPU" << std::endl;
		cpu.updateInfo();
		cpu.printInfo();
		std::cout << "RAM" << std::endl;
		ram.updateInfo();
		ram.printInfo();
		std::cout << "Net" << std::endl;
		net.updateInfo();
		net.printInfo();
		std::cout << std::endl;
		_ct = clock() - _ct;
		usleep(DELAY - _ct);
	}
}
