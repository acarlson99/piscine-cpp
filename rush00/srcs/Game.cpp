#include "Game.hpp"
#include <sstream>

int **Game::cMatrix;

Game::Game(void)
{
	_numEnemies = 5;
	_maxNumEnemies = _numEnemies * 10;
	_numEBullets = 25 * 5;
	_numFBullets = 35;
	_numAsteroids = 100;
	_numStars = 3000;
	this->_score = 0;
}

Game::Game(Game const & cp)
{
	*this = cp;
}

Game::~Game(void)
{
}

Game& Game::operator=(Game const &cp)
{
	_numEnemies = cp._numEnemies;
	_maxNumEnemies = cp._maxNumEnemies;
	_numEBullets = cp._numEBullets;
	_numFBullets = cp._numFBullets;
	_numAsteroids = cp._numAsteroids;
	_numStars = cp._numStars;
	this->_score = cp._score;
	return *this;
}

void	Game::startLoop(void)
{
	initscr();
	cbreak();
	noecho();
	curs_set(0);
	getmaxyx(stdscr, this->_yMax, this->_xMax);
	halfdelay(1);
	this->_startT = clock();
	// this->_start = std::chrono::steady_clock::now();

	// Populate
	Game::cMatrix = new int*[this->_yMax + 1];
	for (int i = 0; i < this->_yMax; ++i)
    	Game::cMatrix[i] = new int[this->_xMax]();

	this->_enemies = new Enemy*[this->_maxNumEnemies];
	this->_fBullets = new Bullet*[this->_numFBullets];
	this->_eBullets = new Bullet*[this->_numEBullets];
	this->_asteroids = new Bullet*[this->_numAsteroids];
	this->_stars = new Bullet*[this->_numStars];


	for (int i = 0; i < _numFBullets; i++)
	{
		this->_fBullets[i] = new Bullet(0, this->_xMax - 2, 0, this->_yMax - 1, 1);
	}

	for (int i = 0; i < _numEBullets; i++)
		this->_eBullets[i] = new Bullet(0, this->_xMax - 2, 0, this->_yMax - 1, 0);

	for (int i = 0; i < _maxNumEnemies; i++)
		this->_enemies[i] = new Enemy(this->_xMax - 2, this->_yMax - 1);

	for (int i = 0; i < _numAsteroids; i++)
		_asteroids[i] = new Bullet(0, this->_xMax - 2, 0, this->_yMax - 1, 0);

	for (int i = 0; i < _numStars; i++)
		_stars[i] = new Bullet(0, this->_xMax - 2, 0, this->_yMax - 1, -1);

	this->_player = new Player("Jonathan", this->_xMax / 2, this->_xMax - 2, this->_yMax - 2, this->_yMax - 1);

	this->_gameWin = newwin(this->_yMax, this->_xMax, 0, 0);

	start_color();
	init_pair(FBULLET_COLOR, COLOR_GREEN, COLOR_BLACK);
	init_pair(EBULLET_COLOR, COLOR_MAGENTA, COLOR_BLACK);
	init_pair(ENEMY_COLOR, COLOR_RED, COLOR_BLACK);
	init_pair(PLAYER_COLOR, COLOR_CYAN, COLOR_BLACK);
	init_pair(ASTEROID_COLOR, COLOR_YELLOW, COLOR_BLACK);

}


void	Game::render(void)
{
	wclear(this->_gameWin);

	for (int i = 0; i < this->_numEnemies; i++)
		if (!this->_enemies[i]->getDeath())
		{
			wattron(this->_gameWin, COLOR_PAIR(ENEMY_COLOR));
			mvwprintw(this->_gameWin, this->_enemies[i]->getY(), this->_enemies[i]->getX(), "X");
			wattroff(this->_gameWin, COLOR_PAIR(ENEMY_COLOR));
		}

	for (int i = 0; i < _numFBullets; i++)
		if (!this->_fBullets[i]->getDeath())
		{
			wattron(this->_gameWin, COLOR_PAIR(FBULLET_COLOR));
			mvwaddch(this->_gameWin, this->_fBullets[i]->getY(), this->_fBullets[i]->getX(), 'l');
			wattroff(this->_gameWin, COLOR_PAIR(FBULLET_COLOR));
		}

	for (int i = 0; i < _numAsteroids; i++)
		if (!this->_asteroids[i]->getDeath())
		{
			wattron(this->_gameWin, COLOR_PAIR(ASTEROID_COLOR));
			mvwprintw(this->_gameWin, this->_asteroids[i]->getY(), this->_asteroids[i]->getX(), "*");
			wattroff(this->_gameWin, COLOR_PAIR(ASTEROID_COLOR));
		}

	for (int i = 0; i < _numStars; i++)
		if (!this->_stars[i]->getDeath())
			mvwprintw(this->_gameWin, this->_stars[i]->getY(), this->_stars[i]->getX(), ".");


	wattron(this->_gameWin, COLOR_PAIR(PLAYER_COLOR));
	mvwprintw(this->_gameWin, this->_player->getY(), this->_player->getX(), "I");
	mvwprintw(this->_gameWin, this->_player->getY() + 1, this->_player->getX(), "O");

	for (int i = 0; i < _numEBullets; i++)
		if (!this->_eBullets[i]->getDeath())
		{
			wattron(this->_gameWin, COLOR_PAIR(EBULLET_COLOR));
			mvwprintw(this->_gameWin, this->_eBullets[i]->getY(), this->_eBullets[i]->getX(), "o");
			wattroff(this->_gameWin, COLOR_PAIR(EBULLET_COLOR));
		}

	wattroff(this->_gameWin, COLOR_PAIR(PLAYER_COLOR));




	std::string livesDisp = "Lives: " + std::to_string(this->_player->getLives()) + " Score: " + std::to_string(this->_score);
	mvwprintw(this->_gameWin, 0, 0, livesDisp.c_str());
	mvwprintw(this->_gameWin, 1, 0, "Time passed: %.2fs\n", this->_currentT);

	wrefresh(this->_gameWin);
	_process();
}

void	Game::getInput(void)
{
	int ch = getch();

	if (ch == 's')
		this->_player->move(0, 1);
	else if (ch == 'w')
		this->_player->move(0, -1);
	else if (ch == 'a')
		this->_player->move(-1, 0);
	else if (ch == 'd')
		this->_player->move(1, 0);
	else if (ch == ' ')
		this->_playerShoot(this->_player->getX(), this->_player->getY());
	else if (ch == 'q')
	{
		_stopLoop();
		exit(0);
	}

	wrefresh(this->_gameWin);
}

void	Game::_playerShoot(int x, int y)
{
	for ( int i = 0; i < _numFBullets; i++)
		if (this->_fBullets[i]->getDeath())
		{
			this->_fBullets[i]->resurrect(x, y);
			break ;
		}
}

void	Game::_enemyShoot(int x, int y)
{
	for ( int i = 0; i < _numEBullets; i++)
		if (this->_eBullets[i]->getDeath())
		{
			this->_eBullets[i]->resurrect(x, y);
			break ;
		}
}

void	Game::_process(void)
{
	if (this->_player->getLives() == 0)
	{
		this->_score /= 100;
		if (this->_readScore() < this->_score)
			this->_saveScore();
		std::string overDisp = "GAME OVER Your Score: " + std::to_string(this->_score)
								+ " You survived: " + std::to_string(this->_currentT) + " seconds";
		mvwprintw(stdscr, _yMax / 2, _xMax / 2 - overDisp.length() / 2, overDisp.c_str());
		std::string highDisp = "HIGHSCORE: " + std::to_string(_readScore());
		mvwprintw(stdscr, _yMax / 2 - 1, _xMax / 2 - highDisp.length() / 2, highDisp.c_str());
		refresh();
		std::this_thread::sleep_for(std::chrono::milliseconds(5000));
		_stopLoop();
		exit(0);
	}


	int numEnemies = 0;

	for (int i = 0; i < _numEnemies; i++)
	{
		if (!this->_enemies[i]->getDeath())
		{
			++numEnemies;
			this->_enemies[i]->move();
			if (AEntity::mt_rand() % 19 == 0)
				this->_enemyShoot(_enemies[i]->getX(), _enemies[i]->getY());
		}
		this->_enemies[i]->check();
	}

	if (!numEnemies)
		_finish();

	for (int i = 0; i < _numEBullets; i++)
		if (!this->_eBullets[i]->getDeath())
			this->_eBullets[i]->move();

	for (int i = 0; i < _numFBullets; i++)
		if (!this->_fBullets[i]->getDeath())
			this->_fBullets[i]->move();

	for (int i = 0; i < _numStars; i++)
		if (!this->_stars[i]->getDeath())
			this->_stars[i]->move();

	if (AEntity::mt_rand() % 9 == 0)
	{
		for (int i = 0; i < _numAsteroids; i++)
			if (_asteroids[i]->getDeath())
			{
				_asteroids[i]->resurrect(AEntity::mt_rand() % this->_xMax, 0);
				break ;
			}
	}

	if (AEntity::mt_rand() % 9 == 0)
	{
		for (int i = 0; i < _numEnemies; i++)
			if (_enemies[i]->getDeath())
			{
				_enemies[i]->resurrect(AEntity::mt_rand() % this->_xMax, 0);
				this->_enemies[i]->check();
				break ;
			}
	}

	if (AEntity::mt_rand() % 19 == 0)
	{
		if (_numEnemies < _maxNumEnemies)
			++_numEnemies;
	}

	for (int i = 0; i < _numStars; i++)
		if (_stars[i]->getDeath())
		{
			_stars[i]->resurrect(AEntity::mt_rand() % this->_xMax, 0);
			break;
		}

	for (int i = 0; i < _numAsteroids; i++)
		if (!this->_asteroids[i]->getDeath())
			this->_asteroids[i]->move();

	this->_currentT = (double)(clock() - this->_startT) / (double)CLOCKS_PER_SEC;

	this->_player->check();
	this->_score += 10;
}

void	Game::_stopLoop(void)
{
	endwin();
}

void	Game::_finish(void)
{
	std::string overDisp = "YOU WON! Your Score: " + std::to_string(this->_score * 10)
					+ " You survived " + std::to_string(this->_currentT) + " seconds";
	mvwprintw(stdscr, _yMax / 2, _xMax / 2 - overDisp.length() / 2, overDisp.c_str());
	refresh();
	std::this_thread::sleep_for(std::chrono::milliseconds(5000));
	_stopLoop();
	exit(0);
}

void	Game::_saveScore(void)
{
	std::ofstream scoreFile;
	scoreFile.open ("score.txt");
	scoreFile << this->_score;
	scoreFile.close();
}

int		Game::_readScore(void)
{
	std::ifstream scoreFile ("score.txt");
	std::string scoreLine;
	if (scoreFile.is_open())
	{
		getline(scoreFile, scoreLine);
		return std::stoi(scoreLine);
	}
	else
		return -1;
}
