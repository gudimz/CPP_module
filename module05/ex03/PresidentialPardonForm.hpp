# ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	std::string _target;
public:
	PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm(void);

	PresidentialPardonForm(PresidentialPardonForm const& object);
	PresidentialPardonForm& operator=(PresidentialPardonForm const& object);

	void execute(Bureaucrat const& executor) const;
	std::string const& getTarget(void) const;
};

#endif