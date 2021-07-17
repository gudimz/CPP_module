#include <iostream>
#include <string>
#include "PhoneBook.hpp"


int main (void)
{
	PhoneBook phoneBook;
	std::string cmd;

	std::cout << "Welcome to PhoneBook!" << std::endl;

	while (std::getline(std::cin, cmd))
	{
		if (!cmd.compare("ADD")) {
			phoneBook.add();
		} else if (!cmd.compare("SEARCH")) {
			// phoneBook.search();
		} else if (!cmd.compare("EXIT")) {
			break;
		} else if (cmd.length()) {
			std::cout << "Bad command, please enter again!" << std::endl;
		}
	}
}