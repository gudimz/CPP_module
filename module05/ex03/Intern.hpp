# ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {
private:
	typedef Form* (Intern::*typeForm)(std::string target);
	typeForm _arrayForm[3];
public:
	Intern(void);
	~Intern(void);

	Intern(Intern const& object);
	Intern& operator=(Intern const& object);

	Form* makeShrubbery(std::string target);
	Form* makeRobotomy(std::string target);
	Form* makePresidential(std::string target);
	Form* makeForm(std::string FormName, std::string target);

	class NotKnownForm: public std::exception {
	public:
		const char* what(void) const throw();
	};
};

#endif