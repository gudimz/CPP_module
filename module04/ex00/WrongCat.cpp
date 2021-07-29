#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "Default WrongCat constructor called!" << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "Default WrongCat destructor called!" << std::endl;
}

WrongCat::WrongCat(WrongCat const& object) {
	std::cout << "WrongCat copy constructor called!" << std::endl;
	*this = object;
}

WrongCat& WrongCat::operator=(WrongCat const& object) {
	this->_type = object.getType();
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "Meeooowwww...." << std::endl;
}