#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
ClapTrap Max("Max");
ScavTrap Kate("Kate");
FragTrap Mary("Mary");
DiamondTrap Jack("Jack");

Max.attack("Jack");
Jack.takeDamage(40);
Kate.guardGate();
Mary.highFivesGuys();
Jack.whoAmI();
Kate.attack("Jack");
Jack.takeDamage(40);
Jack.attack("Kate");
Kate.takeDamage(20);
Mary.attack("Max");
Max.takeDamage(40);
Jack.beRepaired(20);
Mary.attack("Jack");
Jack.takeDamage(40);
return 0;
}