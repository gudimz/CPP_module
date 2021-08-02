#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (int i = 0; i < 4; ++i) {
		_materias[i] = 0;
	}
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; ++i) {
		if (_materias[i] != 0) {
			delete _materias[i];
		}
	}
}

MateriaSource::MateriaSource(MateriaSource const& object) {
	for (int i = 0; i < 4; ++i) {
		_materias[i] = object._materias[i]->clone();
	}
}

MateriaSource& MateriaSource::operator=(MateriaSource const& object) {
	if (this != &object) {
		for (int i = 0; i < 4; ++i) {
			if (_materias[i] != 0) {
				delete _materias[i];
			}
		}
		for (int i = 0; i < 4; ++i) {
			_materias[i] = object._materias[i]->clone();
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; ++i) {
		if (_materias[i] == 0) {
			this->_materias[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	if (!type.compare("ice") || !type.compare("cure")) {
		for (int i = 0; i < 4; ++i) {
			if (_materias[i]->getType() == type) {
				return _materias[i]->clone();
			}
		}
	}
	return 0;
}