#include "TypeInt.hpp"
#include <sstream>

TypeInt::TypeInt(void) {}

TypeInt::TypeInt(std::string strToConvert) : AConverter(strToConvert) {
	std::istringstream ss(strToConvert);
	ss >> this->_value;
}

TypeInt::~TypeInt(void) {}

TypeInt::TypeInt(TypeInt const& object) {
	*this = object;
}

TypeInt& TypeInt::operator=(TypeInt const& object) {
	this->AConverter::operator=(object);
	this->_value = object._value;
	return *this;
}

char TypeInt::castToChar(void) const {
	char c = static_cast<char>(_value);
	if (_value > INT_MAX || _value < INT_MIN) {
		throw Impossible();
	} else if (_value < 32 || _value > 126) {
		throw NonDisplayable();
	} else {
		return c;
	}
}

int TypeInt::castToInt(void) const {
	if (_value > INT_MAX || _value < INT_MIN) {
		throw Impossible();
	} else {
		return _value;
	}
}

float TypeInt::castToFloat(void) const {
	if (_value > INT_MAX || _value < INT_MIN) {
		throw Impossible();
	} else {
		return static_cast<float>(_value);
	}
}

double TypeInt::castToDouble(void) const {
	if (_value > INT_MAX || _value < INT_MIN) {
		throw Impossible();
	} else {
		return static_cast<double>(_value);
	}
}

void TypeInt::printResult(void) const {
	std::cout << "char: ";
	try {
		char c = castToChar();
		std::cout << "'" << c << "'" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "int: ";
	try {
		int i = castToInt();
		std::cout << i << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "float: ";
	try {
		float f = castToFloat();
		std::cout << f << ".0f" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "double: ";
	try {
		double d = castToDouble();
		std::cout << d << ".0" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}