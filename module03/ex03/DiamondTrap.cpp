#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap() {
	_name = "Nameless";
	ClapTrap::_name += "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << GREEN "DiamondTrap " << this->_name << REST << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name) {
	_name = name;
	ClapTrap::_name += "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << GREEN "DiamondTrap " << this->_name << REST << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& object) {
	*this = object;
	std::cout << GREEN "DiamondTrap " << this->_name << REST << " created by copy constructor!" << std::endl;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << GREEN "DiamondTrap " << this->_name << REST << " destroyed!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& object) {
	ClapTrap::operator=(object);
	this->_name = object._name;
	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << GREEN "DiamondTrap " << _name << REST << " My DiamondTrap name is " GREEN <<
	this->_name << REST " and my ClapTrap name is " YEL << ClapTrap::_name << REST << std::endl;
}