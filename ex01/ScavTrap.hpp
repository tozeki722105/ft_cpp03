#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap(const std::string& n);
	~ScavTrap();
	ScavTrap(const ScavTrap& rhs);
	ScavTrap& operator=(const ScavTrap& rhs);
	void      attack(const std::string& target);
	void      guardGate(void) const;
};

#endif