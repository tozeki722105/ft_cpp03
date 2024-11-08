#include <cassert>

#include "ClapTrap.hpp"

int main()
{
	// テスト1: コンストラクタとデストラクタ
	{
		ClapTrap clapTrap("Test1");
	}
	std::cout << std::endl;

	// テスト2: attack関数（エネルギーポイントとヒットポイントが十分にある場合）
	{
		ClapTrap clapTrap("Test2");
		std::cout << "energyPoint = " << clapTrap.getEnergyPoint() << std::endl;
		clapTrap.attack("Target2");
		std::cout << "energyPoint = " << clapTrap.getEnergyPoint() << std::endl;
	}
	std::cout << std::endl;

	// テスト3: attack関数（エネルギーポイントが足りない場合）
	{
		ClapTrap clapTrap("Test3");
		clapTrap.setEnergyPoint(0);
		std::cout << "energyPoint = " << clapTrap.getEnergyPoint() << std::endl;
		clapTrap.attack("Target3");
	}
	std::cout << std::endl;

	// テスト4: attack関数（ヒットポイントが足りない場合）
	{
		ClapTrap clapTrap("Test4");
		clapTrap.setHitPoint(0);
		std::cout << "hitPoint = " << clapTrap.getHitPoint() << std::endl;
		clapTrap.attack("Target4");
	}
	std::cout << std::endl;

	// テスト5: takeDamage関数
	{
		ClapTrap clapTrap("Test5");
		std::cout << "hitPoint = " << clapTrap.getHitPoint() << std::endl;
		clapTrap.takeDamage(5);
		std::cout << "hitPoint = " << clapTrap.getHitPoint() << std::endl;
		clapTrap.takeDamage(15);  // 残りHP5に対して15ダメージ
	}
	std::cout << std::endl;

	// テスト6: beRepaired関数
	{
		ClapTrap clapTrap("Test6");
		std::cout << "hitPoint = " << clapTrap.getHitPoint() << std::endl;
		clapTrap.beRepaired(5);
		std::cout << "hitPoint = " << clapTrap.getHitPoint() << std::endl;
	}
	std::cout << std::endl;

	// テスト7: beRepaired関数（エネルギーポイントが足りない場合）
	{
		ClapTrap clapTrap("Test7");
		clapTrap.setEnergyPoint(0);
		std::cout << "energyPoint = " << clapTrap.getEnergyPoint() << std::endl;
		clapTrap.beRepaired(5);
	}
	std::cout << std::endl;

	// テスト8: コピーコンストラクタ
	{
		ClapTrap clapTrap1("Test8");
		ClapTrap clapTrap2(clapTrap1);
	}
	std::cout << std::endl;

	// テスト9: 代入演算子
	{
		ClapTrap clapTrap1("Test9");
		ClapTrap clapTrap2("Test9_2");
		clapTrap2 = clapTrap1;
	}
	std::cout << std::endl;
}