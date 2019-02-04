#ifndef IMONITORMODULE_HPP
# define IMONITORMODULE_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class IMonitorModule {

public:
	virtual ~IMonitorModule( void ) { };

	virtual void		printInfo( void ) = 0;
	virtual void		updateInfo( void ) = 0;
};

void		logErr( const char * );

#endif
