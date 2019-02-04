#include "HnameUnameMod.hpp"

HnameUnameMod::HnameUnameMod( void )
{
	if (!system("whoami > whoami.tmp 2>>err.log && hostname >> whoami.tmp 2>>err.log"))	// TODO: actually redirect stderr to log file or /dev/null
	{
		std::ifstream ifs("whoami.tmp");
		if (ifs.is_open())
		{
			std::getline(ifs, this->_uname);
			std::getline(ifs, this->_hname);
			ifs.close();
			system("rm whoami.tmp 2>>err.log");
			return ;
		}
	}
	this->_uname = "Error";
	this->_hname = "Error";
}

HnameUnameMod::HnameUnameMod( HnameUnameMod const & cp) { *this = cp; }

HnameUnameMod::~HnameUnameMod( void ) { }

HnameUnameMod& HnameUnameMod::operator=( HnameUnameMod const &cp)
{
	this->_uname = cp._uname;
	this->_hname = cp._hname;
	return *this;
}

void		HnameUnameMod::printInfo( void )
{
	std::cout << "Username: " << _uname << std::endl;
	std::cout << "Hostname: " << _hname << std::endl;
}

void		HnameUnameMod::updateInfo( void ) { }
