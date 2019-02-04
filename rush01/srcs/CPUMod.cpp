#include "CPUMod.hpp"

CPUMod::CPUMod( void )
{
	updateInfo();
}

CPUMod::CPUMod( CPUMod const & cp) { *this = cp; }
CPUMod::~CPUMod( void ) { }
CPUMod& CPUMod::operator=( CPUMod const &cp)
{
	this->_user = cp._user;
	this->_sys = cp._sys;
	this->_idle = cp._idle;
	this->_numCores = cp._numCores;
	this->_logicalCores = cp._logicalCores;
	this->_clockSpeed = cp._clockSpeed;
	return *this;
}

void		CPUMod::printInfo( void )
{
	std::cout << "user " << _user << std::endl << "sys " << _sys << std::endl << "idle " << _idle << std::endl << "num cores " << _numCores << std::endl << "logical cores " << _logicalCores << std::endl << "clock speed " << _clockSpeed << std::endl;
}

void		CPUMod::updateInfo( void )
{
	if (!system("/usr/bin/top -n0 | head -n10 > top.tmp && sysctl hw.physicalcpu hw.logicalcpu machdep.cpu.brand_string >> top.tmp"))
	{
		std::ifstream	ifs("top.tmp");
		std::string		s;
		if (ifs.is_open())
		{
			for (int j = 0; j < 4; j++)
				std::getline(ifs, s);
			int i = 0;
			while (s[i] && !isdigit(s[i]))
				i++;
			_user = atof(&s[i]);
			while (s[i] && (isdigit(s[i]) || s[i] == '.'))
				i++;
			while (s[i] && !isdigit(s[i]))
				i++;
			_sys = atof(&s[i]);
			while (s[i] && (isdigit(s[i]) || s[i] == '.'))
				i++;
			while (s[i] && !isdigit(s[i]))
				i++;
			_idle = atof(&s[i]);
			for (int j = 0; j < 7; j++)
				std::getline(ifs, s);
			i = 0;
			while (s[i] && !isdigit(s[i]))
				i++;
			_numCores = std::atoi(&s.c_str()[i]);
			std::getline(ifs, s);
			i = 0;
			while (s[i] && !isdigit(s[i]))
				i++;
			_logicalCores = std::atoi(&s.c_str()[i]);
			std::getline(ifs, s);
			i = 0;
			while (s[i] && s[i] != '@')
				i++;
			while (s[i] && !isdigit(s[i]))
				i++;
			_clockSpeed = &s[i];
		}
		system("rm -f top.tmp");
	}
}
