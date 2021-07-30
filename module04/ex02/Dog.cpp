#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Default Dog constructor called!" << std::endl;
	this->_brain = new Brain();
}

Dog::~Dog(void) {
	std::cout << "Default Dog destructor called!" << std::endl;
	delete this->_brain;
}

Dog::Dog(Dog const& object) : Animal::Animal(object) {
	std::cout << "Dog copy constructor called!" << std::endl;
	this->_brain = new Brain(*object._brain);
}

Dog& Dog::operator=(Dog const& object) {
	if (this != &object) {
		this->~Dog();
		this->_type = object.getType();
		*_brain = *object.getBrain();
	}
	return *this;
}

Brain* Dog::getBrain(void) const {
	return this->_brain;
}

void Dog::makeSound(void) const {
	std::cout << "Woof-woof!!!" << std::endl;
}