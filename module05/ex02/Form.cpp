#include "Form.hpp"

Form::Form(void) : _gradeSign(150), _gradeExec(150), _isSigned(false) {}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name),
															_gradeSign(gradeSign),
															_gradeExec(gradeExec) {
	this->_isSigned = false;
	checkGrade(this->_gradeSign);
	checkGrade(this->_gradeExec);
}

Form::~Form(void) {}

Form::Form(Form const& object) : _name(object._name),
								_gradeSign(object._gradeSign),
								_gradeExec(object._gradeExec) {
	*this = object;
}

Form& Form::operator=(Form const& object) {
	_isSigned = object._isSigned;
	return *this;
}

std::string const& Form::getName(void) const {
	return this->_name;
}

int Form::getGradeSign(void) const {
	return this->_gradeSign;
}

int Form::getGradeExec(void) const {
	return this->_gradeExec;
}

bool Form::getSign(void) const {
	return this->_isSigned;
}

void Form::beSign(Bureaucrat const& object) {
	if (object.getGrade() < getGradeSign()) {
		this->_isSigned = true;
	} else {
		throw GradeTooLowException();
	}
}

void Form::checkGrade(int grade) {
	if (grade > 150) {
		throw GradeTooLowException();
	} else if (grade < 1) {
		throw GradeTooHighException();
	}
}

const char* Form::GradeTooHighException::what() const throw() {
	return "\x1b[1;31mSorry, this grade is to high!\x1b[0m";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "\x1b[1;31mSorry, this grade is to low!\x1b[0m";
}

const char* Form::NotSignedException::what() const throw() {
	return "\x1b[1;31mSorry, this form is not signed!\x1b[0m";
}

std::ostream& operator<<(std::ostream& os, Form const& object) {
	os << "Form " GREEN << object.getName() << REST ", grade to sign " CYAN << object.getGradeSign()
	<< REST ", grade to execute " CYAN << object.getGradeExec() << REST;
	if (object.getSign() == true) {
		os <<GREEN " is signed" REST;
	} else {
		os << RED " is not signed" REST;
	}
	return os;
}