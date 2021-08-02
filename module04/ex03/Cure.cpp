#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::~Cure(void) {}

Cure::Cure(Cure const& object) {
	*this = object;
}

Cure& Cure::operator=(Cure const& object) {
	if (this != &object) {
		AMateria::operator=(object);
	}
	return *this;
}

AMateria* Cure::clone() const {
	AMateria *cloneCure = new Cure();
	return cloneCure;
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}