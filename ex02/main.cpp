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

	std::cout << std::endl;
	// コピーコンストラクタのテスト
	{
		FragTrap fragTrap_2(fragTrap);
		fragTrap_2.attack("Target");
	}

	std::cout << std::endl;
	// コピー演算子のテスト
	{
		FragTrap fragTrap_3("dest");
		fragTrap_3 = fragTrap;
		fragTrap_3.attack("Target");
	}

	std::cout << std::endl;
}
