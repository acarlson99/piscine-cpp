#ifndef OSINFOMOD_HPP
# define OSINFOMOD_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <fstream>
# include <sys/utsname.h>
# include "IMonitorModule.hpp"

class OSInfoMod : public IMonitorModule, public IMonitorDisplay {

public:
	OSInfoMod( void );
	OSInfoMod( OSInfoMod const & cp);
	~OSInfoMod( void );
	OSInfoMod& operator=( OSInfoMod const &);

	virtual void		printInfo( void );
	virtual void		updateInfo( void );

	virtual std::string	toString( void );

private:
	struct utsname		_uts;	// All elements of this are char ptrs
	std::string			_productName;
	std::string			_productVersion;
	std::string			_buildVersion;
	
};

#endif
