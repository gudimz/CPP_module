#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : counter(0), oldest(0) {
	return;
}

PhoneBook::~PhoneBook(void) {
	return;
}

void PhoneBook::add(void) {
	if (counter < 8) {
	contacts[counter].addInfoContact();
	++counter;
	if (counter == 8) {
		std::cout << std::endl << "Phonebook is full!" << std::endl;
	}
	} else {
		contacts[oldest].addInfoContact();
		++oldest;
		if (oldest == 8) {
			oldest = 0;
		}
	}
}

void PhoneBook::search(void) {
	if (counter == 0) {
		std::cout << "Phonebook empty!" << std::endl;
	} else {
		printTableContact();
	}

	std::cout << "Enter index, please: ";
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

	if (index < 1 || index > counter) {
		std::cout << "There is no contact with such an index" << std::endl;
		std::cout << "Exit in start menu!" << std::endl;
		return;
	}

	contacts[index - 1].printAllField();
	std::cout << std::endl << "Exit in start menu!" << std::endl;
}

void PhoneBook::printTableContact(void) const {

	std::cout << std::endl << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << std::setw(40) <<"|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < counter; ++i) {
		std::cout << "|" << std::setw(10) << i + 1;
		checkLenField(contacts[i].getFirstName());
		checkLenField(contacts[i].getLastName());
		checkLenField(contacts[i].getNickname());
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
