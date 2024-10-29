#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& n) : name(n), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "ClapTrap " << name << " constructed!" << std::endl;
}

ClapTrap::ClapTrap(const std::string& n, unsigned int hp, unsigned int ep, unsigned int ad) 
	: name(n), hitPoint(hp), energyPoint(ep), attackDamage(ad)
{
	std::cout << "ClapTrap " << name << " constructed!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destructed!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs) : name(rhs.name), hitPoint(rhs.hitPoint), 
	energyPoint(rhs.energyPoint), attackDamage(rhs.attackDamage)
{
	std::cout << "ClapTrap " << name << " copy constructed!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& rhs)
{
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	this->hitPoint = rhs.hitPoint;
	this->energyPoint = rhs.energyPoint;
	this->attackDamage = rhs.attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->energyPoint == 0 || this->hitPoint == 0)
	{
		std::cout << "ClapTrap " << name << " can't do anything! (No HP or Energy)" << std::endl;
		return ;
	}
	this->energyPoint--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hitPoint == 0)
	{
		std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
		return ;
	}
	if (amount > this->hitPoint)
		amount = this->hitPoint;
	this->hitPoint -= amount;
	if (this->hitPoint == 0)
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is now dead!" << std::endl;
	else
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoint == 0 || this->hitPoint == 0)
	{
		std::cout << "ClapTrap " << name << " can't do anything! (No HP or Energy)" << std::endl;
		return ;
	}
	this->hitPoint += amount;
	this->energyPoint--;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount << " hit points!" << std::endl;
}

std::string ClapTrap::getName()
{
	return (this->name);
}

unsigned int ClapTrap::getHitPoint()
{
	return (this->hitPoint);
}

unsigned int ClapTrap::getEnergyPoint()
{
	return (this->energyPoint);
}

unsigned int ClapTrap::getAttackDamage()
{
	return (this->attackDamage);
}
