#ifndef CPUMOD_HPP
# define CPUMOD_HPP

# include <unistd.h>
# include <fstream>
# include "IMonitorModule.hpp"

class CPUMod : public IMonitorModule {

public:
	CPUMod( void );
	CPUMod( CPUMod const & cp);
	~CPUMod( void );
	CPUMod& operator=( CPUMod const &);

	virtual void		printInfo( void );
	virtual void		updateInfo( void );

private:
	double			_user;
	double			_sys;
	double			_idle;

	int				_numCores;
	int				_logicalCores;
	std::string		_clockSpeed;
	// std::string		_model;	// This is already in osinfo module.  Unnecessary to store it here as well
};

#endif
