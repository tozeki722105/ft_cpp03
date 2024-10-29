#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap(const std::string& n);
	~FragTrap();
	FragTrap(const FragTrap& rhs);
	FragTrap& operator=(const FragTrap& rhs);
	void highFivesGuys(void);
};

#endif