#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
private:
	std::string  name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;

public:
	ClapTrap(const std::string& n);
	ClapTrap(const std::string& n, unsigned int hp, unsigned int ep, unsigned int ad);
	~ClapTrap();
	ClapTrap(const ClapTrap& rhs);
	ClapTrap&          operator=(const ClapTrap& rhs);
	void               attack(const std::string& target);
	void               takeDamage(unsigned int amount);
	void               beRepaired(unsigned int amount);
	void               setHitPoint(unsigned int point);
	void               setEnergyPoint(unsigned int point);
	void               setAttackDamage(unsigned int score);
	const std::string& getName() const;
	unsigned int       getHitPoint() const;
	unsigned int       getEnergyPoint() const;
	unsigned int       getAttackDamage() const;
};

#endif