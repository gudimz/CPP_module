# ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <time.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
private:
	std::string _target;
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm(void);

	RobotomyRequestForm(RobotomyRequestForm const& object);
	RobotomyRequestForm& operator=(RobotomyRequestForm const& object);

	void execute(Bureaucrat const& executor) const;
	std::string const& getTarget(void) const;
};

#endif