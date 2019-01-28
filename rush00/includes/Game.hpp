#ifndef GAME_HPP
# define GAME_HPP

# include <iostream>
#include <fstream>
#include <chrono>
#include <thread>
# include <math.h>
# include <ncurses.h>
# include "AEntity.hpp"
# include "Player.hpp"
# include "Bullet.hpp"
# include "Enemy.hpp"

# define PLAYER 1
# define FBULLLET 2
# define ENEMY 4
# define EBULLET 8
# define ASTEROID 16

# define FBULLET_COLOR 1
# define EBULLET_COLOR 2
# define ENEMY_COLOR 3
# define PLAYER_COLOR 4
# define ASTEROID_COLOR 5


# define MAX(a,b) (a > b ? a : b)
# define MIN(a,b) (a < b ? a : b)

class Bullet;
class Enemy;


class Game {

public:
	Game(void);
	Game( Game const & cp);
	~Game( void );
	Game& operator=( Game const &);

	void	startLoop(void);
	void	render(void);
	void	getInput(void);

	static int	**cMatrix;


private:
	Enemy		**_enemies;
	Bullet		**_fBullets;
	Bullet		**_eBullets;
	Bullet		**_asteroids;
	Bullet		**_stars;
	WINDOW		*_gameWin;
	Player		*_player;

	int			_numEnemies;
	int			_maxNumEnemies;
	int			_numAsteroids;
	int			_numStars;
	int 		_xMax, _yMax;
	int			_score;
	int			_numEBullets;
	int			_numFBullets;
	int			_startT;
	// std::chrono::steady_clock::time_point _start;
	double		_currentT;

	void		_stopLoop(void);
	void		_finish(void);
	void		_playerShoot(int x, int y);
	void		_enemyShoot(int x, int y);
	void		_process(void);
	void		_saveScore(void);
	int			_readScore(void);

};

#endif
