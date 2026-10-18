/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralhoura <ralhoura@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 10:41:55 by ralhoura          #+#    #+#             */
/*   Updated: 2026/09/21 10:41:55 by ralhoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clap("CL4P-TP");


    clap.attack("Bandit");
    clap.takeDamage(10);
    clap.beRepaired(0);

    clap.takeDamage(8);

    clap.attack("Bandit");
    clap.beRepaired(2);

    ClapTrap robot("Robot");

    for (int i = 0; i < 10; i++)
    {
        robot.attack("Enemy");
    }

    robot.attack("Enemy");
    robot.beRepaired(5);

    return 0;
}

/*
note :
    attack : decreases energyPoints by 1 and prints a message indicating the attack on the target.
    takeDamage : decreases hitPoints by the specified amount and prints a message indicating the damage taken
    beRepaired : increases hitPoints by the specified amount and prints a message indicating the repair + decreases energyPoints by 1.
*/
