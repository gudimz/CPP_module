#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>
# include <iostream>
# include <iomanip>
# include <sstream>

class PhoneBook {
private:
	Contact contacts[8];
	int counter;
	int oldest;
	std::string trim;

	void checkLenField(const std::string& field) const;

public:
	PhoneBook(void);
	~PhoneBook(void);

	void add(void);
	void search(void);
	void printTableContact(void) const;
};


#endif