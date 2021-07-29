#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "Default WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type) {
	std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Default WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& object) {
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	*this = object;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& object) {
	this->_type = object.getType();
	return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal?!" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->_type;
}