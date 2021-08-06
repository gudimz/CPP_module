# ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

# define GREEN "\x1b[1;32m"
# define BACKG "\x1b[30;46m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

class Bureaucrat;

class Form {
private:
	std::string const _name;
	int const _gradeSign;
	int const _gradeExec;
	bool _isSigned;

	void checkGrade(int grade);
public:
	Form(void);
	Form(std::string name, int gradeSign, int gradeExec);
	~Form(void);

	Form(Form const& object);
	Form& operator=(Form const& object);

	std::string const& getName(void) const;
	int getGradeSign(void) const;
	int getGradeExec(void) const;
	bool getSign(void) const;
	void beSign(Bureaucrat const& object);

	class GradeTooHighException: public std::exception {
	public:
		const char* what(void) const throw();
	};
	class GradeTooLowException: public std::exception {
	public:
		const char* what(void) const throw();
	};
};
std::ostream& operator<<(std::ostream& os, Form const& object);



#endif