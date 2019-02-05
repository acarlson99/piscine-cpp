#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <sstream>
# include "IMonitorDisplay.hpp"

class IMonitorModule {

public:
	virtual ~IMonitorModule( void ) { };

	virtual void		printInfo( void ) = 0;
	virtual void		updateInfo( void ) = 0;
	virtual	std::string		toString( void ) = 0;
};

void		logErr( const char * );

#endif
