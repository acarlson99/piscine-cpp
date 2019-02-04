#ifndef DATETIMEMOD_HPP
# define DATETIMEMOD_HPP

#include "IMonitorModule.hpp"
#include <ctime>
#include <sstream>
#include <string>
class DateTimeMod : public IMonitorModule {
    public:
	DateTimeMod( void );
	DateTimeMod( DateTimeMod const & cp);
	~DateTimeMod( void );
	DateTimeMod& operator=( DateTimeMod const &);

	virtual void		printInfo( void );
	virtual void		updateInfo( void );

private:
    std::time_t       *_time;
	std::string		_niceStr;

};

#endif
