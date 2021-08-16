#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

# define GREEN "\x1b[1;32m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define WHITE "\x1b[1;37m"
# define REST "\x1b[0m"

Base * generate(void) {
	int result = rand() % 3;
	if (result == 0) {
		std::cout << "generated class " << GREEN "A" REST << std::endl;
		return new A;
	} else if (result == 1) {
		std::cout << "generated class " << CYAN "B" REST << std::endl;
		return new B;
	} else {
		std::cout << "generated class " << MAG "C" REST << std::endl;
		return new C;
	}
}

void identify(Base* p) {
	if (!p) {
		return;
	}

	if (dynamic_cast<A*>(p)) {
		std::cout << GREEN "A" REST << std::endl;
	} else if (dynamic_cast<B*>(p)) {
		std::cout << CYAN "B" REST << std::endl;
	} else if (dynamic_cast<C*>(p)) {
		std::cout << MAG "C" REST << std::endl;
	}
}

void identify(Base& p) {
	try {
		A& ref = dynamic_cast<A&>(p);
		std::cout << GREEN "A" REST << std::endl;
		(void)ref;
	} catch (std::bad_cast& bc) {}

	try {
		B& ref = dynamic_cast<B&>(p);
		std::cout << CYAN "B" REST << std::endl;
		(void)ref;
	} catch (std::bad_cast& bc) {}

	try {
		C& ref = dynamic_cast<C&>(p);
		std::cout << MAG "C" REST << std::endl;
		(void)ref;
	} catch (std::bad_cast& bc) {}
}

int main (void) {
	std::srand(time(0));
	for (int i = 0; i < 7; ++i) {
		std::cout << std::endl << YEL "*** << Test №" << i + 1 << " >> ***" REST << std::endl;
		Base *p = generate();
		std::cout << "identify ptr: ";
		identify(p);
		std::cout << "identify ref: ";
		identify(*p);
		delete p;
	}
}