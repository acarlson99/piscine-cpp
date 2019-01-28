#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>
# include <string>
# include "Game.hpp"
# include "AEntity.hpp"

class Enemy : public AEntity {

public:
	Enemy( int, int, int, int );
	Enemy( int, int);
	Enemy( void );
	Enemy( Enemy const & cp);
	~Enemy( void );
	Enemy& operator=( Enemy const &);

	int			getDeath( void ) const;

	void		resurrect( int, int );
	void		move( void );
	void 		check( void );

private:
	int			_dead;

};

#endif
