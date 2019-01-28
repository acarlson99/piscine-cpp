#include "Bullet.hpp"

Bullet::Bullet( int x, int xBounds, int y, int yBounds, int friendly ) \
	: AEntity(x, xBounds,y, yBounds) {
	_friendly = friendly;
	_dead = 1;
}

Bullet::Bullet( void ) { }
Bullet::Bullet( Bullet const & cp)
{
	*this = cp;
}

Bullet::~Bullet( void ) { }
Bullet& Bullet::operator=( Bullet const &rhs)
{
	this->_x = rhs._x;
	this->_xBounds = rhs._xBounds;
	this->_y = rhs._y;
	this->_yBounds = rhs._yBounds;
	this->_friendly = rhs._friendly;
	this->_dead = rhs._dead;
	return *this;
}

int			Bullet::getFriendly( void ) const
{
	return (_friendly);
}

int			Bullet::getDeath( void ) const
{
	return (_dead);
}

void		Bullet::resurrect( int x, int y)
{
	_x = x;
	_y = y;
	_dead = 0;
}

void		Bullet::move( void )
{
	if (_friendly == 1)
	{
		Game::cMatrix[_y][_x] &= ~FBULLLET;
		--_y;
	}
	else if (_friendly == -1)
		++_y;
	else
	{
		Game::cMatrix[_y][_x] &= ~EBULLET;
		++_y;
	}
	if (_x < 0 || _x > _xBounds || _y < 0 || _y > _yBounds)
		_dead = 1;
	else if (_friendly == 1)
		Game::cMatrix[_y][_x] |= FBULLLET;
	else if (_friendly == 0)
		Game::cMatrix[_y][_x] |= EBULLET;
}
