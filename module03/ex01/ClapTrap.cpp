#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Nameless"), _hitpoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << YEL "ClapTrap " << this->_name << REST << " created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(100), _energyPoints(50), _attackDamage(20) {
	std::cout << YEL "ClapTrap " << this->_name << REST << " created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& object) {
	*this = object;
	std::cout << YEL "ClapTrap " << this->_name << REST << " created by copy constructor!" << std::endl;
}

ClapTrap::~ClapTrap(void) {
	std::cout << YEL "ClapTrap " << this->_name << REST << " destroyed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& object) {
	this->_name = object._name;
	this->_hitpoints = object._hitpoints;
	this->_energyPoints = object._energyPoints;
	this->_attackDamage = object._attackDamage;
	return *this;
}

void ClapTrap::attack(std::string const& target) {
	if (this->_hitpoints != 0) {
		std::cout << YEL "ClapTrap " << this->_name << REST RED " ⚔️  attacks ⚔️  " REST YEL << target << REST ", causing "
		RED << _attackDamage << REST " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitpoints == 0) {
		std::cout << YEL "ClapTrap " << this->_name << REST " is already " << RED "☠️  dead ☠️ "REST << std::endl;
	} else if (this->_hitpoints > amount) {
		this->_hitpoints -= amount;
		std::cout << YEL "ClapTrap " << this->_name << REST " takes " RED << amount << REST " points of damage!" <<
		" He has left " CYAN << this->_hitpoints << REST " hit points!" << std::endl;
	} else {
		this->_hitpoints = 0;
		std::cout << YEL "ClapTrap " << this->_name << REST " takes " RED << amount << REST " points of damage!" <<
		RED " ☠️  He died ☠️ " REST << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitpoints != 0) {
		this->_hitpoints += amount;
		std::cout << YEL "ClapTrap " << this->_name << REST << GREEN " ❤️  repaired ❤️ " REST " by " GREEN << amount <<
		REST " hit points! " << "He has left " CYAN << this->_hitpoints << REST" hit points!" << std::endl;
	}
}