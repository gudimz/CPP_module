#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

# define GREEN "\x1b[1;32m"
# define WHITE "\x1b[37m"
# define RED "\x1b[1;31m"
# define YEL "\x1b[1;33m"
# define MAG "\x1b[1;35m"
# define CYAN "\x1b[1;36m"
# define REST "\x1b[0m"

int main( void ) {
	std::cout << std::endl << YEL "*** Called constuctors ***" REST << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* w = new WrongCat();

	std::cout << std::endl << YEL "*** Called getType ***" REST << std::endl;
	std::cout << GREEN "Dog:" REST << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << GREEN "Cat:" REST << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << GREEN "wrongCat:" REST << std::endl;
	std::cout << w->getType() << " " << std::endl;

	std::cout << std::endl << YEL "*** Called makeSound ***" REST << std::endl;
	std::cout << GREEN "Cat:" REST << std::endl;
	i->makeSound(); //will output the cat sound!
	std::cout << GREEN "Dog:" REST << std::endl;
	j->makeSound();
	std::cout << GREEN "Animal:" REST << std::endl;
	meta->makeSound();
	std::cout << GREEN "wrongCat:" REST << std::endl;
	w->makeSound();

	std::cout << std::endl << YEL "*** Called destuctors ***" REST << std::endl;
	delete w;
	delete i;
	delete j;
	delete meta;

	std::cout << std::endl << YEL "*** Called leaks ***" REST << std::endl;
	system("leaks animal");
	return 0;
}