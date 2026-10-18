#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "===== DiamondTrap =====" << std::endl;

    DiamondTrap diamond("DI4M-TP");

    std::cout << std::endl;

    diamond.attack("Bandit");
    diamond.takeDamage(30);
    diamond.beRepaired(20);

    std::cout << std::endl;

    diamond.guardGate();
    diamond.highFivesGuys();

    std::cout << std::endl;

    diamond.whoAmI();

    std::cout << std::endl;

    std::cout << "===== Energy Test =====" << std::endl;

    for (int i = 0; i < 55; i++)
        diamond.attack("Enemy");

    std::cout << std::endl;

    std::cout << "===== Death Test =====" << std::endl;

    diamond.takeDamage(200);
    diamond.attack("Enemy");
    diamond.beRepaired(10);
    diamond.highFivesGuys();
    diamond.guardGate();
    diamond.whoAmI();

    DiamondTrap original("Original");
    DiamondTrap copy(original);

    DiamondTrap assigned("Assigned");
    assigned = original;

    copy.whoAmI();
    assigned.whoAmI();

    return 0;
}