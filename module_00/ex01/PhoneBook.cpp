# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>
# include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _counter(0), _oldest(0) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}


void PhoneBook::add(void) {
	if (_counter < 8) {
	_contacts[_counter].addInfoContact();
	++_counter;
	if (_counter == 8) {
		std::cout << std::endl << "Phonebook is full!" << std::endl;
	}
	} else {
		_contacts[_oldest].addInfoContact();
		++_oldest;
		if (_oldest == 8) {
			_oldest = 0;
		}
	}
}


void PhoneBook::search(void) {
	if (_counter == 0) {
		std::cout << "Phonebook empty!" << std::endl;
	} else {
		printTableContact();
	}

	std::cout << std::endl << "Enter index, please: ";
	std::string inp_index;
	std::getline(std::cin, inp_index);
	if (!inp_index.length()) {
		std::cout << std::endl << "Exit in start menu!" << std::endl;
		return;
	}
	for (size_t i = 0; i < inp_index.length(); ++i) {
		if (!isdigit(inp_index[i])) {
			std::cout << "You entered an invalid index" << std::endl;
			std::cout << "Exit in start menu!" << std::endl;
			return;
		}
	}
	std::stringstream inpStream;
	int index;
	inpStream << inp_index;
	inpStream >> index;

	if (index < 1 || index > _counter) {
		std::cout << "There is no contact with such an index" << std::endl;
		std::cout << "Exit in start menu!" << std::endl;
		return;
	}
	_contacts[index - 1].printAllField();
	std::cout << std::endl << "Exit in start menu!" << std::endl;
}


void PhoneBook::printTableContact(void) const {
	std::cout << std::endl << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << std::setw(40) <<"|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < _counter; ++i) {
		std::cout << "|" << std::setw(10) << i + 1;
		checkLenField(_contacts[i].getFirstName());
		checkLenField(_contacts[i].getLastName());
		checkLenField(_contacts[i].getNickname());
		std::cout << "|" << std::endl << std::setw(40) <<
		"|----------|----------|----------|----------|" << std::endl;
	}
}

void PhoneBook::checkLenField(const std::string& field) const {
	if (field.length() > 10) {
		std::cout << "|" << std::setw(9) << field.substr(0, 9) << ".";
	} else {
		std::cout << "|" << std::setw(10) << field;
	}
}
