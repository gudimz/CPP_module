#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& Weapon) : _Weapon(Weapon), _name(name) {};

HumanA::~HumanA(void) {};

void HumanA::attack(void) {
	std::cout << this->_name << " attacks with his " << _Weapon.getType() << std::endl;
}