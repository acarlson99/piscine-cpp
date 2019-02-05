#ifndef RAMMOD_HPP
# define RAMMOD_HPP

# include <unistd.h>
# include <fstream>
# include "IMonitorModule.hpp"

class RAMMod : public IMonitorModule, public IMonitorDisplay {

public:
	RAMMod( void );
	RAMMod( RAMMod const & cp);
	~RAMMod( void );
	RAMMod& operator=( RAMMod const &);

	virtual void		printInfo( void );
	virtual void		updateInfo( void );

	virtual std::string	toString( void );

private:

	// This isall in megabytes
	unsigned		_used;
	unsigned		_wired;
	unsigned		_unused;

};

#endif
