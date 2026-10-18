//! Derived Copy Constructor :

/*
$ A Derived Class object contains both:

    1. Base Class part
    2. Derived Class part

# Example :

    ScavTrap
        │
        ├── ClapTrap part
        │     ├── name
        │     ├── hitPoints
        │     ├── energyPoints
        │     └── attackDamage
        │
        └── ScavTrap part
              └── derived-specific members

$ When copying a Derived Object, both parts must
  be properly initialized.

# Example :

    ScavTrap a("Robot");
    ScavTrap b(a);

^ `b` is created using the ScavTrap Copy Constructor.

# Derived Copy Constructor :

    ScavTrap::ScavTrap(const ScavTrap& other)
        : ClapTrap(other)
    {
    }

^ `ClapTrap(other)` calls the Copy Constructor
  of the Base Class.

^ It copies the Base Class part of the ScavTrap object.

$ The Derived Copy Constructor is therefore
  responsible for constructing the complete
  Derived Object.

# Conceptual Order :

    ScavTrap b(a)
          │
          ↓
    Copy ClapTrap part
          │
          ↓
    Copy ScavTrap part
          │
          ↓
    Complete ScavTrap object

! This is connected to Construction Order:

    Base Class
        ↓
    Derived Class

$ Important distinction:

    ClapTrap(const ClapTrap& other)
        -> Base Copy Constructor

    ScavTrap(const ScavTrap& other)
        -> Derived Copy Constructor

^ The Derived Copy Constructor can explicitly
  initialize the Base part using:

    : ClapTrap(other)

! We do not simply think of the Derived object
  as only its own members.

! It contains a Base part that must also be
  properly constructed.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ A Derived Object contains a Base part and a
  Derived part.

~ When copying a Derived Object, the Base part
  must also be copied.

~ Therefore, the Derived Copy Constructor
  initializes the Base using the Base Copy Constructor.

    ScavTrap::ScavTrap(const ScavTrap& other)
        : ClapTrap(other)
    {
    }

~ `ClapTrap(other)` means:
  call ClapTrap's Copy Constructor to copy
  the Base part.

~ Conceptual order:

    Derived Copy Constructor
            ↓
    Base Copy Constructor
            ↓
    Derived initialization

! Golden Idea:

  Copying a Derived Object
      =
  Copying its Base part
  +
  Copying its Derived part
*/



