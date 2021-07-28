#include "ScavTrap.hpp"


ScavTrap::ScavTrap(void) {
	_name = "Nameless";
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << CYAN "ScavTrap " << this->_name << REST << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << CYAN "ScavTrap " << this->_name << REST << " created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& object) {
	*this = object;
	std::cout << CYAN "ScavTrap " << this->_name << REST << " created by copy constructor!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << CYAN "ScavTrap " << this->_name << REST << " destroyed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& object) {
	this->_name = object._name;
	this->_hitpoints = object._hitpoints;
	this->_energyPoints = object._energyPoints;
	this->_attackDamage = object._attackDamage;
	return *this;
}

void ScavTrap::attack(std::string const& target) {
	if (this->_hitpoints != 0) {
		std::cout << CYAN "ScavTrap " << this->_name << REST RED " ⚔️  attacks ⚔️  " REST YEL << target << REST ", causing "
		RED << _attackDamage << REST " points of damage!" << std::endl;
	}
}

void ScavTrap::guardGate(void) {
	if (this->_hitpoints != 0) {
		std::cout << CYAN "ScavTrap 🛡️  " << this->_name << " 🛡️ " << REST << " have enterred in" <<
		GREEN " 🛡️  Gate keeper mode!🛡️" REST << std::endl;
	}
}