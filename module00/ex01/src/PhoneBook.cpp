#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _counter(0) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::add(void) {
	_contacts[_counter].addInfoContact();
}

void PhoneBook::search(void) {
	if (_counter == 0) {
		std::cout << "Phonebook empty!" << std::endl;
	} else {
		for (int i; i < _counter; ++i) {
			
		}
	}
}

void PhoneBook::printInfoContact(void) const {
	for (int i = 0; )
		std::cout << "     index|first name| last name|  nickname|" << std::endl;
		std::cout << std::setw(10) << _contacts->getNickname();
}

