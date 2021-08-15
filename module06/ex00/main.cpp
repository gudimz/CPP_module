#include "AConverter.hpp"
#include "TypeChar.hpp"
#include "TypeInt.hpp"

bool isNumber(std::string strToConvert) {
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

bool isInt(std::string strToConvert) {
	if (strToConvert.length() != 0 && isNumber(strToConvert)) {
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