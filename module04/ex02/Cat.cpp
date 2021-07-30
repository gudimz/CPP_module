#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Default Cat constructor called!" << std::endl;
	this->_brain = new Brain();
}

Cat::~Cat(void) {
	std::cout << "Default Cat destructor called!" << std::endl;
	delete this->_brain;
}

Cat::Cat(Cat const& object) : Animal::Animal(object) {
	std::cout << "Cat copy constructor called!" << std::endl;
	this->_brain = new Brain(*object._brain);
}

Cat& Cat::operator=(Cat const& object) {
	if (this != &object) {
		this->~Cat();
		this->_type = object.getType();
		*_brain = *object.getBrain();
	}
	return *this;
}

Brain* Cat::getBrain(void) const {
	return this->_brain;
}

void Cat::makeSound(void) const {
	std::cout << "Meeooowwww...." << std::endl;
}