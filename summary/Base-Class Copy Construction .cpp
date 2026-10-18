//! Base-Class Copy Construction :

/*
$ A Derived Class object contains a Base Class part.

$ When a Derived Object is copied, the Base Class part
  must also be copied.

# Example :

    ScavTrap a("Robot");
    ScavTrap b(a);

^ `b` is created using the ScavTrap Copy Constructor.

# Derived Copy Constructor :

    ScavTrap::ScavTrap(const ScavTrap& other)
        : ClapTrap(other)
    {
    }

^ `other` represents the original ScavTrap object.

^ `ClapTrap(other)` initializes the Base Class part
  of the new ScavTrap object.

$ The Base Class Copy Constructor receives the Base
  Class part of the object to be copied.

^ This allows the Base Class to copy its own members:

    name
    hitPoints
    energyPoints
    attackDamage

# Conceptual Flow :

    ScavTrap b(a)
          ↓
    ScavTrap Copy Constructor
          ↓
    ClapTrap(other)
          ↓
    ClapTrap Copy Constructor
          ↓
    Copy Base Class part
          ↓
    Complete ScavTrap object

! The Base Class is responsible for copying its own
  Base Class members.

$ Important distinction:

    ClapTrap(const ClapTrap& other)
        -> copies the Base Class part

    ScavTrap(const ScavTrap& other)
        -> copies the complete Derived Object
           and initializes its Base part

! The Base Copy Constructor is therefore used as
  part of constructing the Derived copy.

^ This follows the same construction principle:

    Base part
        ↓
    Derived part
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ A Derived Object contains a Base Class part.

~ When copying a Derived Object, its Base part
  must also be copied.

~ The Derived Copy Constructor initializes the
  Base part using the Base Copy Constructor.

    ScavTrap::ScavTrap(const ScavTrap& other)
        : ClapTrap(other)
    {
    }

~ `ClapTrap(other)` calls the Base Copy Constructor.

~ The Base Copy Constructor is responsible for
  copying the Base Class members.

~ The Derived Copy Constructor is responsible for
  constructing the complete Derived Object.

~ Conceptual flow:

  Derived Copy Constructor
          ↓
  Base Copy Constructor
          ↓
  Copy Base part
          ↓
  Complete Derived Object

! Golden Idea:

  The Base Class copies its own part,
  while the Derived Class completes the
  construction of the copied Derived Object.
*/


