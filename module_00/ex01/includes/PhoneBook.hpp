#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class PhoneBook {
private:
	Contact _contacts[8];
	int _counter;

public:
	PhoneBook(void);
	~PhoneBook(void);

	void add(void);
	void search(void);
	void printInfoContact(void) const;

};


#endif