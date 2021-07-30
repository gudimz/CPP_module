#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iomanip>

# define GREEN "\x1b[1;32m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

int main( void ) {
	std::cout << std::endl << GREEN "*** Test №1 << Constructor & Destructor >> ***" REST << std::endl<< std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

/***************************************************************************************/

	std::cout << std::endl << GREEN "*** Test №2 << Array >> ***" REST << std::endl;
	std::cout << std::endl << YEL "*** Called constuctors ***" REST << std::endl;
	const Animal* animals[4];
	for (int i = 0; i < 4; ++i) {
		if (!(i < 2)) {
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}
	std::cout << std::endl << YEL "*** Called sound animals ***" REST << std::endl;
	for (int i = 0; i < 4; ++i) {
		animals[i]->makeSound();
	}
	std::cout << std::endl << YEL "*** Called destructors ***" REST << std::endl;
	for (int i = 0; i < 4; ++i) {
		delete animals[i];
	}

/***************************************************************************************/

	std::cout << std::endl << GREEN "*** Test №3 << Deep copy  >> ***" REST << std::endl << std::endl;
	std::cout << std::endl << YEL "*** Called constuctors ***" REST << std::endl;
	Dog dog;
	for (int i = 0; i < 100; ++i) {
		dog.getBrain()->setIdea(i, "I'll go eat");
	}
	Dog copyDog = dog;
	std::cout << std::endl << YEL "*** Print idea ***" REST << std::endl;
	for (int i = 0; i < 100; ++i) {
		std::cout << std::setw(2) << i <<MAG " Idea Dog: " REST << dog.getBrain()->getIdea(i) <<
		CYAN "  Idea copyDog: " REST << copyDog.getBrain()->getIdea(i) << std::endl;
	}

/***************************************************************************************/

	std::cout << std::endl << GREEN "*** Test №4 << Leaks >> ***" REST << std::endl << std::endl;
	system("leaks brain");
	std::cout << GREEN "*** Test №5 << Call Destructor after test №3 ***" REST << std::endl << std::endl;
	return 0;
}