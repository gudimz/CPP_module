#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <iomanip>

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

	void setFirstName(std::string& input);
	void setLastName(std::string& input);
	void setNickname(std::string& input);
	void setPhoneNumber(std::string& input);
	void setDarcestSecret(std::string& input);

	void addInfoContact(void);
};

#endif