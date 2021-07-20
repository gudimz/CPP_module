#include "Zombie.hpp"

int main(void) {
	Zombie* Max = zombieHorde(10, "Max");
	Zombie* Kate = zombieHorde(5, "Kate");
	delete [] Max;
	delete [] Kate;
	return 0;
}