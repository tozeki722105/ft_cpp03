#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap fragTrap("Fraggy");
	fragTrap.highFivesGuys();
	fragTrap.attack("Target");
	std::cout << "hitPoint = " << fragTrap.getHitPoint() << std::endl;
	fragTrap.takeDamage(50);
	std::cout << "hitPoint = " << fragTrap.getHitPoint() << std::endl;
	fragTrap.beRepaired(20);
	std::cout << "hitPoint = " << fragTrap.getHitPoint() << std::endl;
}
