#include "NetworkMod.hpp"

NetworkMod::NetworkMod( void )
{
	updateInfo();
}

NetworkMod::NetworkMod( NetworkMod const & cp) { *this = cp; }
NetworkMod::~NetworkMod( void ) { }

NetworkMod& NetworkMod::operator=( NetworkMod const &cp)
{
	if (this != &cp)
	{
		this->_in = cp._in;
		this->_out = cp._out;
	}
	return *this;
}

void		NetworkMod::printInfo( void )
{
	std::cout << "packets in: " << _in << std::endl << "packets out: " << _out << std::endl;
}

std::string		NetworkMod::toString( void )
{
	std::stringstream	o;

	o << "Network" << std::endl << "packets in: " << _in << std::endl << "packets out: " << _out << std::endl;
	return (o.str());
}

void		NetworkMod::updateInfo( void )
{
	if (!system("/usr/bin/top -n0 | head -n10 > top.tmp"))
	{
		std::ifstream ifs("top.tmp");
		std::string		s;
		if (ifs.is_open())
		{
			for (int i = 0; i < 9; i++)
				std::getline(ifs, s);
			int i = 0;
			while (!isdigit(s[i]))
				i++;
			_in = atof(&s[i]);
			while (isdigit(s[i]))
				i++;
			while (!isdigit(s[i]))
				i++;
			while (isdigit(s[i]))
				i++;
			while (!isdigit(s[i]))
				i++;
			_out = atof(&s[i]);
		}
		system("rm -f top.tmp");
	}
}
