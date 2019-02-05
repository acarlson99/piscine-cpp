#ifndef NetworkMOD_HPP
# define NetworkMOD_HPP

# include <unistd.h>
# include <fstream>
# include "IMonitorModule.hpp"

class NetworkMod : public IMonitorModule, public IMonitorDisplay {

public:
	NetworkMod( void );
	NetworkMod( NetworkMod const & cp);
	~NetworkMod( void );
	NetworkMod& operator=( NetworkMod const &);

	virtual void		printInfo( void );
	virtual void		updateInfo( void );

	virtual std::string	toString( void );

private:
	unsigned long		_in;
	unsigned long		_out;

};

#endif
