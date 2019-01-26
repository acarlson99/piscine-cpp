#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"

int main()
{
	std::string a = "a";
	PlasmaRifle pr = PlasmaRifle(a, 9, 9);
	std::string b = "b";
	pr = PlasmaRifle(b, 1, 1);
	std::cout << pr.getName() << std::endl;
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
