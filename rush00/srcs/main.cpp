#include <iostream>
#include "Game.hpp"

int main()
{
	Game game = Game();

	game.startLoop();
	while (42)
	{
		game.getInput();
		game.render();
	}
}
