#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
	std::string name;
	unsigned int hitPoint;
	unsigned int energyPoint;
	unsigned int attackDamage;

	public:
	ClapTrap(const std::string& n);
	~ClapTrap();
	ClapTrap(const ClapTrap& rhs);
	ClapTrap& operator=(const ClapTrap& rhs);
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void setHitPoint(unsigned int point) {this->hitPoint = point;};
	void setEnergyPoint(unsigned int point) {this->energyPoint = point;};
	void setAttackDamage(unsigned int score) {this->attackDamage = score;};
};

#endif