#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
ClapTrap Max("Max");
ScavTrap Kate("Kate");
FragTrap Mary("Mary");

Max.attack("Kate");
Kate.takeDamage(40);
Kate.guardGate();
Mary.highFivesGuys();
Kate.attack("Max");
Max.takeDamage(40);
Mary.attack("Max");
Max.takeDamage(40);
Max.beRepaired(20);
Kate.attack("Max");
Max.takeDamage(40);
return 0;
}