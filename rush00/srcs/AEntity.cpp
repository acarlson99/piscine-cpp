#include "AEntity.hpp"

std::mt19937		AEntity::mt_rand(time(0));

AEntity::AEntity(int x, int xBounds, int y, int yBounds) \
	:_x(x), _xBounds(xBounds), _y(y), _yBounds(yBounds) { }

AEntity::AEntity( void )\
	:_x(0), _xBounds(0), _y(0), _yBounds(0) { }

AEntity::AEntity( AEntity const & cp) { *this = cp; }

AEntity::~AEntity( void ) { }

AEntity& AEntity::operator=( AEntity const &rhs)
{
	this->_x = rhs._x;
	this->_xBounds = rhs._xBounds;
	this->_y = rhs._y;
	this->_yBounds = rhs._yBounds;
	return *this;
}

int					AEntity::getX( void ) const
{
	return (_x);
}

int					AEntity::getY( void ) const
{
	return (_y);
}

void				AEntity::move( int x, int y )
{
	_x += x;
	if (_x < 0)
		_x = 0;
	else if (_x > _xBounds)
		_x = _xBounds;
	_y += y;
	if (_y < 0)
		_y = 0;
	else if (_y > _yBounds)
		_y = _yBounds;
}

