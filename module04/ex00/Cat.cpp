#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Default Cat constructor called!" << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Default Cat destructor called!" << std::endl;
}

Cat::Cat(Cat const& object) {
	std::cout << "Cat copy constructor called!" << std::endl;
	*this = object;
}

Cat& Cat::operator=(Cat const& object) {
	this->_type = object.getType();
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Meeooowwww...." << std::endl;
}