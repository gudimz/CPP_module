#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::AMateria(std::string const& type) : _type(type) {}

AMateria::~AMateria(void) {}

AMateria::AMateria(AMateria const& object) {
	*this = object;
}

AMateria& AMateria::operator=(AMateria const& object) {
	if (this != &object) {
		this->_type = object.getType();
	}
	return *this;
}

std::string const & AMateria::getType() const {
	return this->_type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
	std::cout << "* Materia use *" << std::endl;
}