#include "TypeDouble.hpp"
#include <sstream>

TypeDouble::TypeDouble(void) {}

TypeDouble::TypeDouble(std::string strToConvert) : AConverter(strToConvert) {
	if (strToConvert != "nan" && strToConvert != "-inf" && strToConvert != "+inf") {
		std::istringstream ss(strToConvert);
		ss >> this->_value;
	}
}

TypeDouble::~TypeDouble(void) {}

TypeDouble::TypeDouble(TypeDouble const& object) {
	*this = object;
}

TypeDouble& TypeDouble::operator=(TypeDouble const& object) {
	this->AConverter::operator=(object);
	this->_value = object._value;
	return *this;
}

char TypeDouble::castToChar(void) const {
	char c = static_cast<char>(_value);
	if (_strToConvert == "-inf" || _strToConvert == "+inf" || _strToConvert == "nan") {
		throw Impossible();
	} else if (_value < 32 || _value > 126) {
		throw NonDisplayable();
	} else {
		return c;
	}
}

int TypeDouble::castToInt(void) const {
	if (_value > INT_MAX || _value < INT_MIN || _strToConvert == "-inf" ||
		_strToConvert == "+inf" || _strToConvert == "nan") {
		throw Impossible();
	} else {
		return _value;
	}
}

float TypeDouble::castToFloat(void) const {
	if (_strToConvert == "+inf" || _strToConvert == "-inf") {
		throw Impossible();
	} else if (_strToConvert == "nan") {
		throw Nanf();
	} else {
		return static_cast<float>(_value);
	}
}

double TypeDouble::castToDouble(void) const {
	if (_strToConvert == "+inf" || _strToConvert == "-inf") {
		throw Impossible();
	} else if (_strToConvert == "nan") {
		throw Nan();
	} else {
		return _value;
	}
}

void TypeDouble::printResult(void) const {
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