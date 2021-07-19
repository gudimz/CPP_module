#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class PhoneBook {
private:
	Contact _contacts[8];
	int _counter;
	int _oldest;

	void checkLenField(const std::string& field) const;

public:
	PhoneBook(void);
	~PhoneBook(void);

	void add(void);
	void search(void);
	void printTableContact(void) const;
};


#endif