#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	_name = "Nameless";
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << MAG "FragTrap " << this->_name << REST << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	_name = name;
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
	this->_name = object._name;
	this->_hitpoints = object._hitpoints;
	this->_energyPoints = object._energyPoints;
	this->_attackDamage = object._attackDamage;
	return *this;
}

void FragTrap::highFivesGuys(void) {
	if (this->_hitpoints != 0) {
		std::cout << MAG "FragTrap " << this->_name << REST <<
		GREEN " ✋ High fives request!✋" REST << std::endl;
	}
}