//! Derived-Class Specialization :

/*
$ A Derived Class can specialize the Base Class
  by using the inherited structure with different
  characteristics and/or adding its own behavior.

# Example :

    ScavTrap : public ClapTrap
    FragTrap : public ClapTrap

$ Both share the same Base Class, but each one
  can have different characteristics.

# ScavTrap :

    hitPoints     = 100
    energyPoints  = 50
    attackDamage  = 20

# FragTrap :

    hitPoints     = 100
    energyPoints  = 100
    attackDamage  = 30

$ These members belong to the ClapTrap part
  of the Derived Object.

! FragTrap does NOT create new copies of:

    hitPoints
    energyPoints
    attackDamage

$ It uses the inherited members and gives them
  values appropriate for FragTrap.

# Example :

    FragTrap::FragTrap()
        : ClapTrap()
    {
        hitPoints = 100;
        energyPoints = 100;
        attackDamage = 30;
    }

$ First, the Base Class part is initialized:

    ClapTrap()

$ Then FragTrap specializes its inherited state:

    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;

# Shared vs Specialized :

    ClapTrap
       ↓
    Common structure
       │
       ├── ScavTrap
       │      ↓
       │   Different characteristics
       │   + guardGate()
       │
       └── FragTrap
              ↓
           Different characteristics
           + highFivesGuys()

! The Derived Class specializes the Base Class;
  it does not create another independent Base part.

# Mental Model :

    ClapTrap
       ↓
    Common Foundation
       ↓
    Derived Class
       ↓
    Specialization
       ↓
    Different characteristics / behavior

! `protected` members allow the Derived Class
  to directly access the inherited data members.

! Golden Idea :

  Same Base Class
        ↓
  Different Derived Class
        ↓
  Different characteristics
  and/or specialized behavior

! Summary :
  A Derived Class can specialize the Base Class
  by using the inherited structure with different
  characteristics and/or adding its own behavior.

! note:
    A Derived Class can specialize the Base Class by 
    using the inherited structure with different 
    characteristics and/or adding its own behavior.
    
*/
