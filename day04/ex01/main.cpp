#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include  "RadScorpion.hpp"

int main()
{
	PlasmaRifle pr = PlasmaRifle();
	std::cout << pr.getName() << std::endl;
	pr.attack();
	
	PowerFist fist = PowerFist();
	std::cout << fist.getName() << std::endl;
	fist.attack();

	SuperMutant sm = SuperMutant();
	std::cout << sm.getHP() << std::endl;
	sm.takeDamage(12);
	std::cout << sm.getHP() << std::endl;
	sm.takeDamage(1200);
	std::cout << sm.getHP() << std::endl;

	RadScorpion rs = RadScorpion();
	std::cout << rs.getHP() << std::endl;
	rs.takeDamage(12);
	std::cout << rs.getHP() << std::endl;
	rs.takeDamage(1200);
	std::cout << rs.getHP() << std::endl;
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
