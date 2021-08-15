#include "AConverter.hpp"
#include "TypeChar.hpp"
#include "TypeInt.hpp"
#include "TypeFloat.hpp"
#include "TypeDouble.hpp"

bool checkInt(std::string strToConvert) {
	for (size_t i = 0; i < strToConvert.length(); ++i) {
		if ((i == 0) && (strToConvert[i] == '-' || strToConvert[i] == '+')) {
			++i;
		}
		if (!isdigit(strToConvert[i])) {
			return false;
		}
	}
	return true;
}

bool checkDouble(std::string strToConvert) {
	if (strToConvert == "-inf" || strToConvert == "+inf" || strToConvert == "nan") {
		return true;
	}
	size_t i = 0;
	if (strToConvert[i] == '-' || strToConvert[i] == '+') {
		++i;
	}
	while(strToConvert[i] && isdigit(strToConvert[i])) {
		++i;
	}
	if (strToConvert[i] == '.') {
		++i;
	} else {
		return false;
	}
	while(strToConvert[i] && isdigit(strToConvert[i])) {
		++i;
	}
	if (i != strToConvert.length()) {
		return false;
	} else {
		return true;
	}
}

bool checkFloat(std::string strToConvert) {
	if (strToConvert == "-inff" || strToConvert == "+inff" || strToConvert == "nanf") {
		return true;
	}
	size_t i = 0;
	if (strToConvert[i] == '-' || strToConvert[i] == '+') {
		++i;
	}
	while(strToConvert[i] && isdigit(strToConvert[i])) {
		++i;
	}
	if (strToConvert[i] == '.') {
		++i;
	} else {
		return false;
	}
	while(strToConvert[i] && isdigit(strToConvert[i])) {
		++i;
	}
	if (strToConvert[i] == 'f') {
		++i;
	} else {
		return false;
	}
	if (i != strToConvert.length()) {
		return false;
	} else {
		return true;
	}
}

bool isInt(std::string strToConvert) {
	if (strToConvert.length() != 0 && checkInt(strToConvert)) {
		return true;
	}
	return false;
}

bool isDouble(std::string strToConvert) {
	if (strToConvert.length() > 2 && checkDouble(strToConvert)) {
		return true;
	}
	return false;
}

bool isFloat(std::string strToConvert) {
	if (strToConvert.length() > 3 && checkFloat(strToConvert)) {
		return true;
	}
	return false;
}

bool isChar(std::string strToConvert) {
	if (strToConvert.length() == 1 && !isdigit(strToConvert[0]) && isprint(strToConvert[0])) {
		return true;
	}
	return false;
}
AConverter* createConvert(std::string strToConvert) {
	if (isChar(strToConvert)) {
		return new TypeChar(strToConvert);
	} else if (isInt(strToConvert)) {
		return new TypeInt(strToConvert);
	} else if (isFloat(strToConvert)) {
		return new TypeFloat(strToConvert);
	} else if (isDouble(strToConvert)) {
		return new TypeDouble(strToConvert);
	}
	return 0;
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cerr << "Error: wrong number of arguments" << std::endl;
		return 1;
	}

	AConverter* convert = createConvert(argv[1]);
	if (!convert) {
		std::cerr << "Error: wrong argument" << std::endl;
		return 1;
	}
	convert->printResult();

	delete convert;
	return 0;
}