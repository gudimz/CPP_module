#include "easyfind.hpp"
#include <vector>
#include <list>
#include <array>

template <typename T>
void test(T const& container, int value) {
	std::cout << "Container: ";
	for (typename T::const_iterator i = container.begin(); i != container.end(); ++i) {
   	 std::cout << YEL << *i << ' ' << REST;
	}
		std::cout << std::endl << YEL << value << REST;
	if (easyfind(container, value) == container.end()) {
		std::cout << RED " not found " REST << "in container!"<< std::endl;
	} else {
		std::cout << GREEN " found " REST << "in container!" << std::endl;
	}

}

int main(void) {
	std::cout << std::endl << CYAN "*** Test №1 << std::vector >> ***" REST << std::endl << std::endl;
	std::vector<int> v;
	for (int i = 21; i < 42; ++i) {
		v.push_back(i);
	}
	test(v, 33);
	test(v, 42);
	test(v, -42);
	test(v, 21);

	std::cout << std::endl << CYAN "*** Test №2 << std::list >> ***" REST << std::endl << std::endl;
	std::list<int> list;
	for (int i = 21; i < 42; ++i) {
		list.push_back(i);
	}
	test(list, 33);
	test(list, 42);
	test(list, -42);
	test(list, 21);

	std::cout << std::endl << CYAN "*** Test №3 << std::array >> ***" REST << std::endl << std::endl;
	std::array<int, 10> array;
	for (int i = 0; i < 10; ++i) {
		array[i] = i;
	}
	test(array, 8);
	test(array, 21);
	test(array, 10);
	test(array, 0);
	return 0;

}