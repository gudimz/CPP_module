# ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm : public Form {
private:
	std::string _target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm(ShrubberyCreationForm const& object);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& object);

	void execute(Bureaucrat const& executor) const;
	std::string const& getTarget(void) const;
};

#endif