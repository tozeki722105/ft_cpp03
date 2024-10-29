#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    // ClapTrapのテスト
    ClapTrap clapTrap("ClapTrappy");
    clapTrap.attack("Target1");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.takeDamage(15); // 死亡確認
    std::cout << std::endl;
    
    // ScavTrapのテスト
    ScavTrap scavTrap("Scavvy");
    scavTrap.attack("Target2");
    scavTrap.guardGate();
    scavTrap.takeDamage(50);
    scavTrap.beRepaired(30);
    scavTrap.attack("Target1"); // 攻撃できるか確認
    scavTrap.takeDamage(150); // 死亡確認
    std::cout << std::endl;
    
    // コピーコンストラクタのテスト
    ScavTrap scavTrap2(scavTrap);  // コピーコンストラクタが呼ばれる
    scavTrap2.attack("Target3");
    std::cout << std::endl;

     // 代入演算子のテスト
    ScavTrap scavTrap3("Scavvy3");
    scavTrap3 = scavTrap;
    scavTrap3.attack("Target4");
    std::cout << std::endl;
}