#ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
private:
	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _phone_number;
	std::string _darkest_secret;

public:
	Contact(void);
	~Contact(void);

	const std::string& getFirstName(void) const;
	const std::string& getLastName(void) const;
	const std::string& getNickname(void) const;
	const std::string& getPhoneNumber(void) const;
	const std::string& getDarcestSecret(void) const;

	void setFirstName(const std::string& input);
	void setLastName(const std::string& input);
	void setNickname(const std::string& input);
	void setPhoneNumber(const std::string& input);
	void setDarcestSecret(const std::string& input);

	void addInfoContact(void);
	void printAllField(void) const;
};

#endif