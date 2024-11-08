#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& n) : ClapTrap(n, 100, 50, 20)
{
	std::cout << "ScavTrap " << this->name << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->name << " destructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap " << this->name << " copy constructed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	std::cout << "ScavTrap " << this->name << " copy assignment operator called!" << std::endl;
	if (this == &rhs)
		return (*this);
	this->ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->energyPoint == 0 || this->hitPoint == 0) {
		std::cout << "ScavTrap " << this->name << " can't do anything! (No HP or Energy)"
				  << std::endl;
		return;
	}
	this->setEnergyPoint(this->energyPoint - 1);
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing "
			  << this->attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(void) const
{
	if (this->energyPoint == 0 || this->hitPoint == 0) {
		std::cout << "ScavTrap " << this->name << " can't do anything! (No HP or Energy)"
				  << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " is now in Gate keeper mode." << std::endl;
}
