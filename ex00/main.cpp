#include <cassert>

#include "ClapTrap.hpp"

int main()
{
	// テスト1: コンストラクタとデストラクタ
	{
		ClapTrap clapTrap("Test1");
	}  // ここでデストラクタが呼ばれる
	std::cout << std::endl;

	// テスト2: attack関数（エネルギーポイントとヒットポイントが十分にある場合）
	{
		ClapTrap clapTrap("Test2");
		clapTrap.attack("Target1");
		// 期待される出力: ClapTrap Test2 attacks Target1, causing 0 points of damage!
		// エネルギーポイントが1減っていることを確認
		// (C++98では直接確認できないので、必要に応じてデバッグ出力などを追加)
	}
	std::cout << std::endl;

	// テスト3: attack関数（エネルギーポイントが足りない場合）
	{
		ClapTrap clapTrap("Test3");
		clapTrap.setEnergyPoint(0);
		clapTrap.attack("Target2");
		// 期待される出力: ClapTrap Test3 can't do anything! (No HP or Energy)
	}
	std::cout << std::endl;

	// テスト4: attack関数（ヒットポイントが足りない場合）
	{
		ClapTrap clapTrap("Test4");
		clapTrap.setHitPoint(0);
		clapTrap.attack("Target3");
		// 期待される出力: ClapTrap Test4 can't do anything! (No HP or Energy)
	}
	std::cout << std::endl;

	// テスト5: takeDamage関数
	{
		ClapTrap clapTrap("Test5");
		clapTrap.takeDamage(5);
		// 期待される出力: ClapTrap Test5 takes 5 points of damage!
		// ヒットポイントが5減っていることを確認
		// (C++98では直接確認できないので、必要に応じてデバッグ出力などを追加)

		clapTrap.takeDamage(15);  // 残りHP5に対して15ダメージ
		// 期待される出力: ClapTrap Test5 takes 5 points of damage and is now dead!
	}
	std::cout << std::endl;

	// テスト6: beRepaired関数
	{
		ClapTrap clapTrap("Test6");
		clapTrap.beRepaired(5);
		// 期待される出力: ClapTrap Test6 repairs itself for 5 hit points!
		// ヒットポイントが5増えていることを確認
		// (C++98では直接確認できないので、必要に応じてデバッグ出力などを追加)
	}
	std::cout << std::endl;

	// テスト7: beRepaired関数（エネルギーポイントが足りない場合）
	{
		ClapTrap clapTrap("Test7");
		clapTrap.setEnergyPoint(
				0);  // energyPointを直接変更(本来はprivateなので良くないが、テストのため)
		clapTrap.beRepaired(5);
		// 期待される出力: ClapTrap Test7 can't do anything! (No HP or Energy)
	}
	std::cout << std::endl;

	// テスト8: コピーコンストラクタ
	{
		ClapTrap clapTrap1("Test8");
		ClapTrap clapTrap2(clapTrap1);
		// 期待される出力: ClapTrap Test8 copy constructed!
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