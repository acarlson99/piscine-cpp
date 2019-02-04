#ifndef IMONITORDISPLAY_HPP
# define IMONITORDISPLAY_HPP

# include <iostream>
# include <string>
# include <stdexcept>

#define HUNAME 1
#define OSINFO 2
#define DATETIME 4
#define CPU 8
#define RAM 16
#define NETWORK 32
#define PONY 64
#define GUI 128

class IMonitorDisplay {

public:
	virtual ~IMonitorDisplay( void ) {};
};

#endif
