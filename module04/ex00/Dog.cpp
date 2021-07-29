#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Default dog constructor called!" << std::endl;
}

Dog::~Dog(void) {
	std::cout << "Default dog destructor called!" << std::endl;
}

Dog::Dog(Dog const& object) {
	std::cout << "Dog copy constructor called!" << std::endl;
	*this = object;
}

Dog& Dog::operator=(Dog const& object) {
	this->_type = object.getType();
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Woof-woof!!!" << std::endl;
}
