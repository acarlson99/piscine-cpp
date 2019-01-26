#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"

int main()
{
	PlasmaRifle pr = PlasmaRifle();
	std::cout << pr.getName() << std::endl;
	pr.attack();
	PowerFist fist = PowerFist();
	std::cout << fist.getName() << std::endl;
	fist.attack();
	// Character* zaz = new Character("zaz");
	// std::cout << *zaz;
	// Enemy* b = new RadScorpion();
	// AWeapon* pr = new PlasmaRifle();
	// AWeapon* pf = new PowerFist();
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->equip(pf);
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->equip(pr);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
	// zaz->attack(b);
	// std::cout << *zaz;
	// return 0;
}
