#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << MAG "FragTrap " << this->_name << REST << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << MAG "FragTrap " << this->_name << REST << " created!" << std::endl;
}

FragTrap::FragTrap(FragTrap const& object) {
	*this = object;
	std::cout << MAG "FragTrap " << this->_name << REST << " created by copy constructor!" << std::endl;
}

FragTrap::~FragTrap(void) {
	std::cout << MAG "FragTrap " << this->_name << REST << " destroyed!" << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& object) {
	ClapTrap::operator=(object);
	return *this;
}

void FragTrap::highFivesGuys(void) {
	if (this->_hitpoints != 0) {
		std::cout << MAG "FragTrap " << this->_name << REST <<
		GREEN " ✋ High fives request!✋" REST << std::endl;
	}
}