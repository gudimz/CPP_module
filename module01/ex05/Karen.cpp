#include "Karen.hpp"

Karen::Karen(void) {
	Karen::funcs[0] = &Karen::debug;
	Karen::funcs[1] = &Karen::info;
	Karen::funcs[2] = &Karen::warning;
	Karen::funcs[3] = &Karen::error;
};

Karen::~Karen(void) {};

void Karen::debug(void) {
	std::cout << "I love to get extra bacon for my "
	"7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void) {
	std::cout << "I cannot believe adding extra bacon cost more money. "
	"You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been "
	"coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void) {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int calc_level(std::string level) {
	char *lvl[4];

	lvl[0] = (char *)"DEBUG";
	lvl[1] = (char *)"INFO";
	lvl[2] = (char *)"WARNING";
	lvl[3] = (char *)"ERROR";

	for (int i = 0; i < 4; ++i) {
		if (!level.compare(lvl[i]))
			return i;
	}
	return -1;
}

void Karen::complain(std::string level) {
	int index;

	index = calc_level(level);
	if (index < 0) {
		std::cout << "Error! This level does not exist." << std::endl;
	} else {
		(this->*funcs[index])();
	}
}