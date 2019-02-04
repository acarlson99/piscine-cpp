#include "DateTimeMod.hpp"

DateTimeMod::DateTimeMod( void )
{
    _time = new time_t; // (time(_time)); this was giving me a weird 'uninitialized value' error

	time(_time);

    if (_time == nullptr)
        std::cout << "Time err" << std::endl;
	else
		updateInfo();
}

DateTimeMod::DateTimeMod( DateTimeMod const & cp) { *this = cp; }

DateTimeMod::~DateTimeMod( void ) { }

DateTimeMod& DateTimeMod::operator=( DateTimeMod const &cp)
{
	this->_time = cp._time;
	this->_niceStr = cp._niceStr;
	return *this;
}

void		DateTimeMod::printInfo( void )
{
	std::cout << _niceStr;
}

void		DateTimeMod::updateInfo( void ) { 
	if (this->_time)
	{
		std::time(_time);
		this->_niceStr = std::string(std::asctime(std::localtime(_time)));
	}
}
