#include <iostream>
#include <string>
#include "PhoneBook.hpp"


int main (void)
{
	PhoneBook phoneBook;
	std::string cmd;

	std::cout << std::endl << "Welcome to PhoneBook!" << std::endl;
	std::cout << "Enter command, please: <ADD> <SEARCH> <EXIT>" << std::endl << std::endl;

	while (21)
	{
		std::cout << "Enter CMD >> ";
		std::getline(std::cin, cmd);
		if (!cmd.compare("ADD")) {
			phoneBook.add();
		} else if (!cmd.compare("SEARCH")) {
			phoneBook.search();
		} else if (!cmd.compare("EXIT")) {
			break;
		} else if (!cmd.length()) {
			std::cout << "Enter command, please!";
		} else if (cmd.length()) {
			std::cout << "Bad command, please enter again!";
		}
	}
}