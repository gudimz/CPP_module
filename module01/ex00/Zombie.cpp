#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "created" << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << this->_name << " destroyed" << std::endl;
}

void Zombie::announce(void) {
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}