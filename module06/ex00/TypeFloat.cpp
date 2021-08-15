#include "TypeFloat.hpp"
#include <sstream>

TypeFloat::TypeFloat(void) {}

TypeFloat::TypeFloat(std::string strToConvert) : AConverter(strToConvert) {
	if (strToConvert != "nanf" && strToConvert != "-inff" && strToConvert != "+inff") {
		std::istringstream ss(strToConvert.substr(0, strToConvert.length() - 1));
		ss >> this->_value;
	}
}

TypeFloat::~TypeFloat(void) {}

TypeFloat::TypeFloat(TypeFloat const& object) {
	*this = object;
}

TypeFloat& TypeFloat::operator=(TypeFloat const& object) {
	this->AConverter::operator=(object);
	this->_value = object._value;
	return *this;
}

char TypeFloat::castToChar(void) const {
	char c = static_cast<char>(_value);
	if (_strToConvert == "-inff" || _strToConvert == "+inff" || _strToConvert == "nanf") {
		throw Impossible();
	} else if (!isprint(c)) {
		throw NonDisplayable();
	} else {
		return c;
	}
}

int TypeFloat::castToInt(void) const {
	if (_value > INT_MAX || _value < INT_MIN || _strToConvert == "-inff" ||
		_strToConvert == "+inff" || _strToConvert == "nanf") {
		throw Impossible();
	} else {
		return _value;
	}
}

float TypeFloat::castToFloat(void) const {
	if (_strToConvert == "+inff" || _strToConvert == "-inff") {
		throw Impossible();
	} else if (_strToConvert == "nanf") {
		throw Nanf();
	} else {
		return _value;
	}
}

double TypeFloat::castToDouble(void) const {
	if (_strToConvert == "+inff" || _strToConvert == "-inff") {
		throw Impossible();
	} else if (_strToConvert == "nanf") {
		throw Nan();
	} else {
		return static_cast<double>(_value);
	}
}

void TypeFloat::printResult(void) const {
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
		if (f - static_cast<int>(f) == 0) {
			std::cout << f << ".0f" << std::endl;
		} else {
			std::cout << f << "f" << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "double: ";
	try {
		double d = castToDouble();
		if (d - static_cast<int>(d) == 0) {
			std::cout << d << ".0" << std::endl;
		} else {
			std::cout << d << std::endl;
		}
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}