#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
ClapTrap Max("Max");
ScavTrap Kate("Kate");
ScavTrap copyKate(Kate);

Max.attack("copyKate");
copyKate.takeDamage(40);
Kate.guardGate();
Kate.attack("Max");
Max.takeDamage(20);
copyKate.attack("Max");
Max.takeDamage(20);
Max.attack("Kate");
Kate.takeDamage(10);
Kate.beRepaired(10);
Max.attack("copyKate");
copyKate.takeDamage(40);
Kate.attack("copyKate");
copyKate.takeDamage(20);
return 0;
}