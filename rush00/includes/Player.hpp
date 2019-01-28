#ifndef PLAYER_HPP
# define PLAYER_HPP

# include <iostream>
# include <string>
# include "AEntity.hpp"

class Player : public AEntity {

public:
	Player(  std::string name, int x, int xBounds, int y, int yBounds);
	Player( void );
	Player( Player const & cp);
	~Player( void );
	Player& operator=( Player const &);

	unsigned int getLives(void) const;
	void	move(int x, int y);
	void	check( void );

private:

	std::string _name;
	unsigned int _lives;

};

#endif
