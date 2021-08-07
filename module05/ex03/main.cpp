#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main (void) {
	std::cout << std::endl << BACKG "*** Test №1 << Shrubbery Creation Form >> ***" REST << std::endl << std::endl;
	try {
		Intern intern;
		Form *form;
		form = intern.makeForm("shrubbery creation", "Bender");

		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 137);
		std::cout << Max << std::endl;
		std::cout << *form << std::endl;

		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(*form);
		Max.executeForm(*form);
		delete form;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №2 << Robotomy Request Form >> ***" REST << std::endl << std::endl;
	try {
		Intern intern;
		Form *form;
		form = intern.makeForm("robotomy request", "Bender");

		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 45);
		std::cout << Max << std::endl;
		std::cout << *form << std::endl;

		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(*form);
		Max.executeForm(*form);
		delete form;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №3 << Presidential Pardon Form >> ***" REST << std::endl << std::endl;
	try {
		Intern intern;
		Form *form;
		form = intern.makeForm("presidential pardon", "Bender");

		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 5);
		std::cout << Max << std::endl;
		std::cout << *form << std::endl;

		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(*form);
		Max.executeForm(*form);
		delete form;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << BACKG "*** Test №4 << Not know form >> ***" REST << std::endl << std::endl;
	try {
		Intern intern;
		Form *form;
		form = intern.makeForm("not know form", "Bender");

		std::cout << std::endl << YEL "*** Print info ***" REST << std::endl;
		Bureaucrat Max("Max", 1);
		std::cout << Max << std::endl;
		std::cout << *form << std::endl;

		std::cout << std::endl << YEL "*** Print actions ***" REST << std::endl;
		Max.signForm(*form);
		Max.executeForm(*form);
		delete form;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}