#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Default animal constructor called!" << std::endl;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal constructor called!" << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Default animal destructor called!" << std::endl;
}

Animal::Animal(Animal const& object) {
	std::cout << "Animal copy constructor called!" << std::endl;
	*this = object;
}

Animal& Animal::operator=(Animal const& object) {
	this->_type = object.getType();
	return *this;
}

void Animal::makeSound(void) const {
	std::cout << "Animal?!" << std::endl;
}

std::string Animal::getType(void) const {
	return this->_type;
}