# ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

# define GREEN "\x1b[1;32m"
# define BACKG "\x1b[30;46m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

class Form;

class Bureaucrat {
private:
	std::string const _name;
	int _grade;
	void checkGrade(void);
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);

	Bureaucrat(Bureaucrat const& object);
	Bureaucrat& operator=(Bureaucrat const& object);

	std::string const& getName(void) const;
	void signForm(Form& form);
	int getGrade(void) const;
	void  increment(void);
	void decrement(void);

	class GradeTooHighException: public std::exception {
	public:
		const char* what(void) const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		const char* what(void) const throw();
	};
};
std::ostream& operator<<(std::ostream& os, Bureaucrat const& object);



#endif