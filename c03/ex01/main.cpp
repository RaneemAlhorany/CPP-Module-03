/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralhoura <ralhoura@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 23:33:52 by ralhoura          #+#    #+#             */
/*   Updated: 2026/10/02 23:33:52 by ralhoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "===== ClapTrap =====" << std::endl;

    ClapTrap clap("CL4P-TP");

    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << std::endl;

    std::cout << "===== ScavTrap =====" << std::endl;

    ScavTrap scav("SC4V-TP");

    scav.attack("Bandit");
    scav.takeDamage(30);
    scav.beRepaired(20);
    scav.guardGate();

    std::cout << std::endl;

    std::cout << "===== Energy Test =====" << std::endl;

    int i;
    for (i = 0; i < 50; i++)
        scav.attack("Enemy");

    scav.attack("Enemy");

    std::cout << std::endl;

    std::cout << "===== Death Test =====" << std::endl;

    scav.takeDamage(200);
    scav.attack("Enemy");
    scav.beRepaired(10);
    scav.guardGate();

   return 0;

}