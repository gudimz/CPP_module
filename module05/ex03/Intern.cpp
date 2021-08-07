#include "Intern.hpp"

Intern::Intern(void) {
	this->_arrayForm[0] = &Intern::makeShrubbery;
	this->_arrayForm[1] = &Intern::makeRobotomy;
	this->_arrayForm[2] = &Intern::makePresidential;
}

Intern::~Intern(void) {}

Intern::Intern(Intern const& object) {
	*this = object;
}

Intern& Intern::operator=(Intern const& object) {
	this->_arrayForm[0] = object._arrayForm[0];
	this->_arrayForm[1] = object._arrayForm[1];
	this->_arrayForm[2] = object._arrayForm[2];
	return *this;
}

Form* Intern::makeShrubbery(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form* Intern::makeRobotomy(std::string target) {
	return new RobotomyRequestForm(target);
}

Form* Intern::makePresidential(std::string target) {
	return new PresidentialPardonForm(target);
}

int calc_formName(std::string FormName) {
	char *lvl[4];

	lvl[0] = (char *)"shrubbery creation";
	lvl[1] = (char *)"robotomy request";
	lvl[2] = (char *)"presidential pardon";

	for (int i = 0; i < 3; ++i) {
		if (FormName == lvl[i])
			return i;
	}
	throw Intern::NotKnownForm();
}

Form* Intern::makeForm(std::string FormName, std::string target) {
	int index;
	Form* form;

	index = calc_formName(FormName);
	form = (this->*_arrayForm[index])(target);
	std::cout << "Intern creates " GREEN << form->getName() << REST << std::endl;
	return form;
}

const char* Intern::NotKnownForm::what() const throw() {
	return "Sorry, i don't know this form!";
}