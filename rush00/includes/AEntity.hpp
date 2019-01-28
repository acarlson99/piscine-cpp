#ifndef AENTITY_HPP
# define AENTITY_HPP

# include <iostream>
# include <string>
# include <random>

class AEntity {

public:
	AEntity( int x, int xBounds, int y, int yBounds);
	AEntity( void );
	AEntity( AEntity const & cp);
	~AEntity( void );
	AEntity& operator=( AEntity const &);

	std::string const	&getName( void ) const;
	int					getX( void ) const;
	int					getY( void ) const;

	void				move( int x, int y );

	static std::mt19937		mt_rand;

protected:
	int				_x;
	int				_xBounds;
	int				_y;
	int				_yBounds;

private:

};

#endif
