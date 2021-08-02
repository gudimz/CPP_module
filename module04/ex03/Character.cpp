#include "Character.hpp"

Character::Character(void) : _countEquip(0) {
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = 0;
	}
}

Character::Character(std::string name) : _name(name), _countEquip(0) {
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = 0;
	}
}

Character::~Character(void) {
	for (int i = 0; i < 4; ++i) {
		if (_inventory[i] != 0) {
			delete _inventory[i];
		}
	}
}

Character::Character(Character const& object) {
	this->_name = object.getName();
	this->_countEquip = object._countEquip;
	for (int i = 0; i < 4; ++i) {
		_inventory[i] = object._inventory[i]->clone();
	}
}

Character& Character::operator=(Character const& object) {
	if (this != &object) {
		for (int i = 0; i < 4; ++i) {
			if (_inventory[i] != 0) {
				delete _inventory[i];
			}
		}
		this->_name = object.getName();
		this->_countEquip = object._countEquip;
		for (int i = 0; i < 4; ++i) {
			_inventory[i] = object._inventory[i]->clone();
		}
	}
	return *this;
}

std::string const& Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	if (_countEquip < 4) {
		for (int i = 0; i < 4; ++i) {
			if (_inventory[i] == 0) {
				_inventory[i] = m;
				++_countEquip;
				break;
			}
		}
	}
}

void Character::unequip(int idx) {
	if (idx >= 0 && idx < 4) {
		_inventory[idx] = 0;
		--_countEquip;
	}
}

void Character::use(int idx, ICharacter& target) {
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != 0) {
		this->_inventory[idx]->use(target);
	}
}