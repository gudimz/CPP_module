#include "iter.hpp"

# define GREEN "\x1b[1;32m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define REST "\x1b[0m"

class Awesome {
public:
	Awesome(void) : _n(42) {return;}

	int get(void) const {return this->_n;}
private:
    int _n;
};

std::ostream & operator<<(std::ostream &o, Awesome const& rhs) {o << rhs.get(); return o;}

template <typename T>
void print(T const& x) {std::cout << x << std::endl; return;}

template <typename T>
void printArray(T const& elem) {
	std::cout << elem << std::endl;
}

void checkEven(int const& number) {
	if (!(number % 2)) {
		std::cout << number << GREEN " is even" REST << std::endl;
	} else {
		std::cout << number << RED " is odd" REST << std::endl;
	}
}

int main(void) {
	std::cout << std::endl << GREEN "*** Test №1 << Iter and array ints >> ***" REST << std::endl;
	int* numbers = new int[7];
	for (int i = 0; i < 7; ++i) {
		numbers[i] = i;
	}
	std::cout << YEL "*** Called iter(numbers, 7, printArray) ***" REST << std::endl;
	iter(numbers, 7, printArray);
	std::cout << YEL "*** Called iter(numbers, 7, checkEven) ***" REST << std::endl;
	iter(numbers, 7, checkEven);
	delete [] numbers;

	std::cout << std::endl << GREEN "*** Test №2 << Iter and array strings >> ***" REST << std::endl;
	std::string* array = new std::string[3];
	array[0] = "This is";
	array[1] = "three";
	array[2] = "lines";

	std::cout << YEL "*** Called iter(array, 3, printArray) ***" REST << std::endl;
	iter(array, 3, printArray);
	delete [] array;

	std::cout << std::endl << GREEN "*** Test №3 << Awesome >> ***" REST << std::endl;
	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];
	std::cout << YEL "*** Called iter(tab, 5, print) ***" REST << std::endl;
	iter(tab, 5, print);
	std::cout << YEL "*** Called iter(tab2, 5, print) ***" REST << std::endl;
	iter(tab2, 5, print);
}