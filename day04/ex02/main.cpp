#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	{
		TacticalMarine jim;

		TacticalMarine *joe = jim.clone();

		std::cout << joe << " " << &jim;
	}
	{
		ISpaceMarine* bob = new TacticalMarine;
		ISpaceMarine* jim = new AssaultTerminator;
		ISquad* vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		std::cout << vlc->getCount() << std::endl;
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine* cur = vlc->getUnit(i);
			std::cout << cur << std::endl;
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	return 0;
}
