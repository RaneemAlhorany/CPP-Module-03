/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralhoura <ralhoura@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 23:33:57 by ralhoura          #+#    #+#             */
/*   Updated: 2026/10/02 23:33:57 by ralhoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"



ScavTrap::ScavTrap()
    : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;

    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
    : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);

    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    return *this;
}


ScavTrap::~ScavTrap()
 {
    std::cout << "ScavTrap destructor called" << std::endl;
 }



void ScavTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap " << name
                  << " can't attack because it has no hit points."
                  << std::endl;
        return;
    }

    if (energyPoints == 0)
    {
        std::cout << "ScavTrap " << name
                  << " can't attack because it has no energy points."
                  << std::endl;
        return;
    }

    energyPoints--;

    std::cout << "ScavTrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage!"
              << std::endl;
}


void ScavTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap " << name
                  << " can't be repaired because it is dead."
                  << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "ScavTrap " << name
                  << " can't be repaired because it has no energy points."
                  << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "ScavTrap " << name
              << " is repaired for " << amount
              << " points of health!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "ScavTrap " << name
                  << " is already dead!" << std::endl;
        return;
    }

    if (amount >= static_cast<unsigned int>(hitPoints))
        hitPoints = 0;
    else
        hitPoints -= amount;

    std::cout << "ScavTrap " << name
              << " takes " << amount
              << " points of damage!" << std::endl;
}



void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is now in Gatekeeper mode" << std::endl;
}




