#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavTrap("Scavvy");
	scavTrap.guardGate();
	scavTrap.attack("Target1");
	std::cout << "hitPoint = " << scavTrap.getHitPoint() << std::endl;
	scavTrap.takeDamage(50);
	std::cout << "hitPoint = " << scavTrap.getHitPoint() << std::endl;
	scavTrap.beRepaired(30);
	std::cout << "hitPoint = " << scavTrap.getHitPoint() << std::endl;
	scavTrap.attack("Target2");  // 攻撃できるか確認
	scavTrap.takeDamage(150);    // 死亡確認

	std::cout << std::endl;
	// コピーコンストラクタのテスト
	{
		ScavTrap scavTrap_2(scavTrap);
		scavTrap_2.attack("Target");
	}

	std::cout << std::endl;
	// コピー演算子のテスト
	{
		ScavTrap scavTrap_3("dest");
		scavTrap_3 = scavTrap;
		scavTrap_3.attack("Target");
	}

	std::cout << std::endl;
}