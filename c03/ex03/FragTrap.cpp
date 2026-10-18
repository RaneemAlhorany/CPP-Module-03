/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralhoura <ralhoura@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 18:05:22 by ralhoura          #+#    #+#             */
/*   Updated: 2026/10/07 18:05:22 by ralhoura         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./FragTrap.hpp"



FragTrap::FragTrap()
    : ClapTrap()
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name)
    : ClapTrap(name)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

    std::cout << "FragTrap parameterized constructor called" << std::endl;
}



FragTrap::FragTrap(const FragTrap& other)
    : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}


FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);

    std::cout << "FragTrap copy assignment operator called" << std::endl;

    return *this;
}



FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}


void FragTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap " << name
                  << " can't attack because it has no hit points."
                  << std::endl;
        return;
    }

    if (energyPoints == 0)
    {
        std::cout << "FragTrap " << name
                  << " can't attack because it has no energy points."
                  << std::endl;
        return;
    }

    energyPoints--;

    std::cout << "FragTrap " << name
              << " attacks " << target
              << ", causing " << attackDamage
              << " points of damage!" << std::endl;
}




void FragTrap::highFivesGuys(void)
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap " << name
                << " can't request a high five because it has no hit points."
                << std::endl;
        return;
    }

    std::cout << "FragTrap " << name << " is requesting a high five!" << std::endl;
}



void FragTrap::beRepaired(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap " << name
                  << " can't be repaired because it is dead."
                  << std::endl;
        return;
    }
    if (energyPoints == 0)
    {
        std::cout << "FragTrap " << name
                  << " can't be repaired because it has no energy points."
                  << std::endl;
        return;
    }
    hitPoints += amount;
    energyPoints--;
    std::cout << "FragTrap " << name
              << " is repaired for " << amount
              << " points of health!" << std::endl;
}



void FragTrap::takeDamage(unsigned int amount)
{
    if (hitPoints == 0)
    {
        std::cout << "FragTrap " << name
                  << " is already dead!" << std::endl;
        return;
    }

    if (amount >= static_cast<unsigned int>(hitPoints))
        hitPoints = 0;
    else
        hitPoints -= amount;

    std::cout << "FragTrap " << name
              << " takes " << amount
              << " points of damage!" << std::endl;
}


