#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::~Ice(void) {}

Ice::Ice(Ice const& object) {
	*this = object;
}

Ice& Ice::operator=(Ice const& object) {
	if (this != &object) {
		AMateria::operator=(object);
	}
	return *this;
}

AMateria* Ice::clone() const {
	AMateria *cloneIce = new Ice();
	return cloneIce;
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}