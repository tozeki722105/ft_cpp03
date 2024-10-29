#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& n) : ClapTrap(n, 100, 50, 20)
{
	std::cout << "ScavTrap " << this->getName() << " constructed!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->getName() << " destructed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap " << this->getName() << " copy constructed!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	if (this == &rhs)
		return (*this);
	this->ClapTrap::operator=(rhs);
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (this->getEnergyPoint() == 0 || this->getHitPoint() == 0)
	{
		std::cout << "ScavTrap " << this->getName() << " can't do anything! (No HP or Energy)" << std::endl;
		return ;
	}
	this->setEnergyPoint(this->getEnergyPoint() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode." << std::endl;
}
