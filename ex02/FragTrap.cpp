#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& n) : ClapTrap(n, 100, 100, 30)
{
	std::cout << "FragTrap " << this->name << " constructed!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->name << " destructed!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap " << this->name << " copy constructed!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	std::cout << "FragTrap " << this->name << " copy assignment operator called!" << std::endl;
	if (this == &rhs)
		return (*this);
	this->ClapTrap::operator=(rhs);
	return (*this);
}

void FragTrap::highFivesGuys(void) const
{
	std::cout << "FragTrap " << this->name << " positive high fives request." << std::endl;
}
