#include "ClapTrap.hpp"

int main( void ) {
ClapTrap Nameless;
ClapTrap Max("Max");
ClapTrap CopyMax(Max);

CopyMax.attack("Nameless");
Nameless.takeDamage(5);
Nameless.attack("CopyMax");
CopyMax.takeDamage(2);
Max.attack("Nameless");
Nameless.takeDamage(5);
CopyMax.beRepaired(2);
return 0;
}