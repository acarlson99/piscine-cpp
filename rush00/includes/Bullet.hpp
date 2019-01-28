#ifndef BULLET_HPP
# define BULLET_HPP

# include <iostream>
# include <string>
# include "AEntity.hpp"
# include "Game.hpp"

class Bullet : public AEntity {

public:
	Bullet( int x, int xBounds, int y, int yBounds, int friendly );
	Bullet( void );
	Bullet( Bullet const & cp);
	~Bullet( void );
	Bullet& operator=( Bullet const &);

	int			getFriendly( void ) const;
	int			getDeath( void ) const;

	void		resurrect( int, int );
	void		move( void );

private:
	int			_friendly;
	int			_dead;

};

#endif
