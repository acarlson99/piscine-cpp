#include "Enemy.hpp"

Enemy::Enemy( int x, int xBounds, int y, int yBounds ) : AEntity(x, xBounds, y, yBounds) { }
Enemy::Enemy( int xBounds, int yBounds ) : AEntity(xBounds / 2, xBounds, 0, yBounds) {
	_x += (mt_rand() % (_xBounds) - xBounds / 2);
	_y += (mt_rand() % MIN(_yBounds, 3));
	_dead = 0;
}

Enemy::Enemy( void ) { }
Enemy::Enemy( Enemy const & cp) { *this = cp; }
Enemy::~Enemy( void ) { }
Enemy& Enemy::operator=( Enemy const & rhs)
{
	this->_x = rhs._x;
	this->_xBounds = rhs._xBounds;
	this->_y = rhs._y;
	this->_yBounds = rhs._yBounds;
	this->_dead = rhs._dead;
	return *this;
}

void			Enemy::move( void )
{
	int px;
	int py;
	px = _x;
	py = _y;

	int x, y;
	x = mt_rand() % 3 - 1;
	y = mt_rand() % 2;

	Game::cMatrix[_y][_x] &= ~ENEMY;
	// if (mt_rand() % 8 == 0)
	// 	AEntity::move(mt_rand() % 3 - 1, mt_rand() % 2);


	_x += x;
	if (_x < 0)
		_x = 0;
	else if (_x > _xBounds)
		_x = _xBounds;
	_y += y;
	if (_y < 0)
		_y = 0;
	else if (_y > _yBounds)
	{
		_y = _yBounds;
		_dead = 1;
		return ;
	}



	// if (_x > _xBounds)
	// 	_x = _xBounds;
	// if (_y > _yBounds)
	// {
	// 	_dead = 1;
	// 	return;
	// }
	// if (_x < 0)
	// 	_x = 0;
	// if (_y < 0)
	// 	_y = 0;
	if (Game::cMatrix[_y][_x] & ENEMY)
	{
		_x = px;
		_y = py;
	}
	Game::cMatrix[_y][_x] |= ENEMY;
}

int				Enemy::getDeath( void ) const
{
	return (_dead);
}

void 			Enemy::check( void )
{
	if (Game::cMatrix[_y][_x] & FBULLLET)
	{
		Game::cMatrix[_y][_x] &= ~ENEMY;
		_dead = 1;
	}
}

void			Enemy::resurrect( int x, int y )
{
	_x = x;
	_y = y;
	_dead = 0;
}