#ifndef NetworkMOD_HPP
# define NetworkMOD_HPP

# include <unistd.h>
# include <fstream>
# include "IMonitorModule.hpp"

class NetworkMod : public IMonitorModule {

public:
	NetworkMod( void );
	NetworkMod( NetworkMod const & cp);
	~NetworkMod( void );
	NetworkMod& operator=( NetworkMod const &);

	virtual void		printInfo( void );
	virtual void		updateInfo( void );

private:
	unsigned long		_in;
	unsigned long		_out;

};

#endif
