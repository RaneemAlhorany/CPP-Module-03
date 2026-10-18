//! Inheritance :

/*
$ Inheritance is a C++ mechanism that allows a new
  class to be created based on an existing class.

$ The existing class is called the Base Class.

$ The new class is called the Derived Class.

# Example :

    class ClapTrap
    {
        ...
    };

    class ScavTrap : public ClapTrap
    {
        ...
    };

^ In this example:

    ClapTrap
        -> Base Class

    ScavTrap
        -> Derived Class

$ The Derived Class is built on top of the Base Class
  instead of recreating everything from the beginning.

# Example :

    ClapTrap
    │
    ├── name
    ├── hitPoints
    ├── energyPoints
    ├── attackDamage
    │
    ├── attack()
    ├── takeDamage()
    └── beRepaired()

            ↓ Inheritance

    ScavTrap
    │
    ├── based on ClapTrap
    ├── can use inherited functionality
    ├── can add new behavior
    └── can change existing behavior

$ In CPP03 Ex01, ScavTrap inherits from ClapTrap:

    class ScavTrap : public ClapTrap

! Inheritance does not mean that ScavTrap is exactly
  the same as ClapTrap.

$ ScavTrap can have its own characteristics.

# Example :

    ClapTrap:

        HP      = 10
        Energy  = 10
        Attack  = 0

    ScavTrap:

        HP      = 100
        Energy  = 50
        Attack  = 20

$ ScavTrap also adds its own behavior:

    guardGate()

^ Therefore, inheritance allows ScavTrap to be based
  on ClapTrap while having its own characteristics
  and behavior.

$ The relationship can be represented as:

    ClapTrap
        ↓
    Base Class
        ↓
    ScavTrap
        ↓
    Derived Class

! The main idea is to reuse an existing class as the
  foundation for a new class.

$ In our project, ScavTrap is a specialized class
  based on ClapTrap.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Inheritance allows a new class to be created
  based on an existing class.

~ The existing class is the Base Class.

~ The new class is the Derived Class.

~ In CPP03 Ex01:
  ClapTrap -> Base Class
  ScavTrap -> Derived Class

~ The inheritance relationship is written as:

  class ScavTrap : public ClapTrap

~ ScavTrap is based on ClapTrap and can use its
  inherited functionality.

~ A Derived Class can have its own characteristics
  and behavior.

~ ScavTrap has different HP, Energy, and Attack values.

~ ScavTrap also adds:
  guardGate()

~ Inheritance allows a class to build on an existing
  class instead of recreating everything from scratch.
*/

