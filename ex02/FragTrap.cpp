#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& n) : ClapTrap(n, 100, 50, 20)
{
	std::cout << "FragTrap " << this->getName() << " constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->getName() << " destructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap " << this->getName() << " copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	if (this == &rhs)
		return (*this);
	this->ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << this->getName() << " positive high fives request." << std::endl;
}
