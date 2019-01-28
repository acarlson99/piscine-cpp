#include "Player.hpp"
#include "Game.hpp"

Player::Player(  std::string name, int x, int xBounds, int y, int yBounds)\
	: AEntity(x, xBounds,y, yBounds), _name(name), _lives(3)
{
	Game::cMatrix[y][x] |= PLAYER;
};

Player::Player( void ) { }

Player::Player( Player const & cp) { *this = cp; }

Player::~Player( void ) { }

Player& Player::operator=( Player const &cp) {
	_x = cp._x;
	_xBounds = cp._xBounds;
	_y = cp._y;
	_yBounds = cp._yBounds;
	_name = cp._name;
	_lives = cp._lives;
	return *this;
}

unsigned int Player::getLives(void) const
{
	return this->_lives;
}

void	Player::move(int x, int y)
{
	if (_y + 1 >= _yBounds)
		_y = _yBounds - 1;
	Game::cMatrix[_y][_x] &= ~PLAYER;
	Game::cMatrix[_y + 1][_x] &= ~PLAYER;
	AEntity::move(x, y);
	if (_y + 1 >= _yBounds)
		_y = _yBounds - 1;
	if (_y < _yBounds - _yBounds / 5)
		_y = _yBounds - _yBounds / 5;
	//update map;
	Game::cMatrix[_y][_x] |= PLAYER;
	Game::cMatrix[_y + 1][_x] |= PLAYER;
}

void 	Player::check( void )
{
	if ((Game::cMatrix[_y][_x] != 0 && Game::cMatrix[_y][_x] != PLAYER) || (Game::cMatrix[_y + 1][_x] != 0 && Game::cMatrix[_y + 1][_x] != PLAYER)) // a
		--_lives;
}