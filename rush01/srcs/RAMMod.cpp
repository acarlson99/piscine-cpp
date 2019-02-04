#include "RAMMod.hpp"

RAMMod::RAMMod( void )
{
	updateInfo();
}

RAMMod::RAMMod( RAMMod const & cp) { *this = cp; }
RAMMod::~RAMMod( void ) { }
RAMMod& RAMMod::operator=( RAMMod const &cp)
{
	this->_used = cp._used;
	this->_wired = cp._wired;
	this->_unused = cp._unused;
	return *this;
}

void		RAMMod::printInfo( void )
{
	std::cout << "used: " << _used << "M" << std::endl << "wired: " << _wired << "M" << std::endl << "unused: " << _unused << "M" << std::endl;
}

void		RAMMod::updateInfo( void )
{
	if (!system("/usr/bin/top -n0 | head -n10 > top.tmp && sysctl hw.physicalcpu hw.logicalcpu machdep.cpu.brand_string >> top.tmp"))
	{
		std::ifstream	ifs("top.tmp");
		std::string		s;
		if (ifs.is_open())
		{
			for (int i = 0; i < 7; i++)
				std::getline(ifs, s);
			int i = 0;
			while (s[i] && !isdigit(s[i]))
				i++;
			_used = std::atoi(&s.c_str()[i]);
			while (isdigit(s[i]))
				i++;
			while (s[i] && !isdigit(s[i]))
				i++;
			_wired = std::atoi(&s.c_str()[i]);
			while (isdigit(s[i]))
				i++;
			while (s[i] && !isdigit(s[i]))
				i++;
			_unused = std::atoi(&s.c_str()[i]);
		}
	}
}
