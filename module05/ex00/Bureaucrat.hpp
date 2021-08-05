# ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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