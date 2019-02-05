#ifndef HNAMEUNAMEMOD_HPP
# define HNAMEUNAMEMOD_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <fstream>
# include "IMonitorModule.hpp"

class HnameUnameMod : public IMonitorModule, public IMonitorDisplay {

public:
	HnameUnameMod( void );
	HnameUnameMod( HnameUnameMod const & cp);
	~HnameUnameMod( void );
	HnameUnameMod& operator=( HnameUnameMod const &);

	virtual void		printInfo( void );
	virtual void		updateInfo( void );

	virtual std::string	toString( void );

private:
	std::string		_uname;
	std::string		_hname;

};

#endif
