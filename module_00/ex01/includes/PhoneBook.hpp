#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

class PhoneBook {
private:
	int counter;
	int oldest;
	std::string trim;

	void printTableContact(void) const;
	void checkLenField(const std::string& field) const;

public:
	Contact contacts[8];

	PhoneBook(void);
	~PhoneBook(void);

	void add(void);
	void search(void);
};


#endif