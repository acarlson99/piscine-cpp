#include "OSInfoMod.hpp"

OSInfoMod::OSInfoMod( void )
{
	if (uname(&this->_uts))
	{
		::logErr("Unable to read uname");
	}
	else if (!system("sw_vers -productName > sw_vers.tmp 2>>err.log && sw_vers -productVersion 2>>err.log >> sw_vers.tmp && sw_vers -buildVersion >> sw_vers.tmp 2>>err.log"))	// TODO: make this handle errors better
	{
		std::ifstream ifs("sw_vers.tmp");
		if (ifs.is_open())
		{
			std::getline(ifs, this->_productName);
			std::getline(ifs, this->_productVersion);
			std::getline(ifs, this->_buildVersion);
			ifs.close();
			system("rm sw_vers.tmp");
			return ;
		}
	}
	else
	{
		std::cout << "UNABLE TO DO THE THING" << std::endl;
		logErr("Unable to open sw_vers.tmp");
	}
	this->_productName = "Error";
	this->_productVersion = "Error";
	this->_buildVersion = "Error";
}

OSInfoMod::OSInfoMod( OSInfoMod const & cp) { *this = cp; }

OSInfoMod::~OSInfoMod( void ) { }

OSInfoMod& OSInfoMod::operator=( OSInfoMod const &cp)
{
	this->_uts = cp._uts;
	this->_productName = cp._productName;
	this->_productVersion = cp._productVersion;
	this->_buildVersion = cp._buildVersion;
	return *this;
}

void		OSInfoMod::printInfo( void )
{
	std::cout << "sysname: " << this->_uts.sysname << std::endl;
	std::cout << "nodename: " << this->_uts.nodename << std::endl;
	std::cout << "release: " << this->_uts.release << std::endl;
	std::cout << "version: " << this->_uts.version << std::endl;
	std::cout << "machine: " << this->_uts.machine << std::endl;
	std::cout << "ProductName: " << this->_productName << std::endl;
	std::cout << "ProductVersion: " << this->_productVersion << std::endl;
	std::cout << "BuildVersion: " << this->_buildVersion << std::endl;
}

void		OSInfoMod::updateInfo( void ) { }
