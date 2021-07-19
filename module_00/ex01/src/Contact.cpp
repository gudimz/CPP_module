#include "Contact.hpp"

Contact::Contact(void) {
	return;
}

Contact::~Contact(void) {
	return ;
}


const std::string& Contact::getFirstName(void) const {
	return this->_first_name;
}

const std::string& Contact::getLastName(void) const {
	return this->_last_name;
}

const std::string& Contact::getNickname(void) const {
	return this->_nickname;
}

const std::string& Contact::getPhoneNumber(void) const {
	return this->_phone_number;
}

const std::string& Contact::getDarcestSecret(void) const {
	return this->_darkest_secret;
}


void Contact::setFirstName(std::string& input) {
	this->_first_name = input;
}

void Contact::setLastName(std::string& input) {
	this->_last_name = input;
}

void Contact::setNickname(std::string& input) {
	this->_nickname = input;
}

void Contact::setPhoneNumber(std::string& input) {
	this->_phone_number = input;
}

void Contact::setDarcestSecret(std::string& input) {
	this->_darkest_secret = input;
}


void Contact::addInfoContact(void) {
	std::string input;

	std::cout << std::endl << "Enter first name, please: ";
	std::getline(std::cin, input);
	this->_first_name = input;

	std::cout << "Enter last name, please: ";
	std::getline(std::cin, input);
	this->_last_name = input;

	std::cout << "Enter nickname, please: ";
	std::getline(std::cin, input);
	this->_nickname = input;

	std::cout << "Enter phone number, please: ";
	std::getline(std::cin, input);
	this->_phone_number = input;

	std::cout << "Enter darcest secret, please: ";
	std::getline(std::cin, input);
	this->_darkest_secret = input;

	std::cout << std::endl << "New contact added successfully!" << std::endl;
}

void Contact::printAllField(void) const {
	std::cout << std::endl << "first name: " << getFirstName() << std::endl;
	std::cout << "last name: " << getLastName() << std::endl;
	std::cout << "nickname: " << getNickname() << std::endl;
	std::cout << "phone number: " << getPhoneNumber() << std::endl;
	std::cout << "darcest secret: " << getDarcestSecret() << std::endl;
}