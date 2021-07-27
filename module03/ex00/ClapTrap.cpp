#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("nameless"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << YEL << this->_name << REST << " created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap " << YEL << this->_name << REST << " created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& object) {
	*this = object;
	std::cout << "ClapTrap " << YEL << this->_name << REST << " created by copy constructor!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap " << YEL << this->_name << REST << " destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& object) {
	this->_name = object._name;
	this->_hitpoints = object._hitpoints;
	this->_energyPoints = object._energyPoints;
	this->_attackDamage = object._attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const& target) {
	std::cout << "ClapTrap " YEL << this->_name << REST RED " ⚔️  attacks ⚔️  " REST YEL << target << REST ", causing " RED <<
	_attackDamage << REST " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitpoints > amount) {
		this->_hitpoints -= amount;
		std::cout << "ClapTrap " YEL << this->_name << REST " takes " RED << amount << REST " points of damage!" <<
		" He has left " CYAN << this->_hitpoints << " hit points!" REST << std::endl;
	} else {
		this->_hitpoints = 0;
		std::cout << "ClapTrap " YEL << this->_name << REST " takes " RED << amount << REST " points of damage!" <<
		RED " ☠️  He died ☠️ " REST << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << YEL << this->_name << REST << GREEN" ❤️  healed ❤️  " << amount <<
	REST " hit points! He has left " CYAN << this->_hitpoints << REST" hit points!" << std::endl;
}