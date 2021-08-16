#include <stdint.h>
#include <iostream>

# define GREEN "\x1b[1;32m"
# define YEL "\x1b[1;33m"
# define CYAN "\x1b[1;36m"
# define WHITE "\x1b[1;37m"
# define REST "\x1b[0m"

struct Data {
	int hp;
	int armor;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}

int main (void) {
	std::cout << std::endl << CYAN "*** << Data ptr >> ***" REST << std::endl;
	Data ptr;
	ptr.hp = 100;
	ptr.armor = 50;
	std::cout << YEL "Adress: " << &ptr << REST << std::endl;
	std::cout << GREEN "hp ❤️ : " << ptr.hp << REST << std::endl;
	std::cout << WHITE "armor 🛡️ : " << ptr.armor << REST << std::endl;

	uintptr_t raw = serialize(&ptr);

	std::cout << std::endl << CYAN "*** << Data copy >> ***" REST << std::endl;
	Data *copy = deserialize(raw);
	std::cout << YEL "Adress: " << copy << REST << std::endl;
	std::cout << GREEN "hp ❤️ : " << copy->hp << REST << std::endl;
	std::cout << WHITE "armor 🛡️ : " << copy->armor << REST << std::endl << std::endl;
}