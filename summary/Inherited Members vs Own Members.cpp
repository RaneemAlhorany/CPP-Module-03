//! Inherited Members vs Own Members :

/*
$ When a Derived Class inherits from a Base Class,
  it can use members that come from the Base Class.

$ These are called Inherited Members.

# Example :

    class ClapTrap
    {
    protected:
        std::string name;
        unsigned int hitPoints;
        unsigned int energyPoints;
        unsigned int attackDamage;

    public:
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    };

    class ScavTrap : public ClapTrap
    {
        ...
    };

^ ScavTrap inherits the members provided by ClapTrap.

# Inherited Members :

    name
    hitPoints
    energyPoints
    attackDamage

    takeDamage()
    beRepaired()

$ A Derived Class can also have members that belong
  specifically to itself.

^ These are its Own Members.

# Example :

    class ScavTrap : public ClapTrap
    {
    public:
        void guardGate();
    };

^ `guardGate()` belongs specifically to ScavTrap.

! A Derived Class can therefore contain:

    Inherited Members
        +
    Own Members

$ A Derived Class can also provide its own implementation
  for a behavior that already exists in the Base Class.

# Example :

    ClapTrap
        attack()

    ScavTrap
        attack()

^ Both classes have `attack()`,

^ but ScavTrap provides its own implementation.

! This is different from simply adding a new member
  such as `guardGate()`.

# Mental Model :

                ClapTrap
                   │
          ┌────────┼─────────┐
          │        │         │
        data   takeDamage()  attack()
          │     beRepaired()
          │        │
          └────────┴─────────┘
                   ↓
               ScavTrap
                   │
          ┌────────┼─────────┐
          │        │         │
      inherited  inherited  own/specialized
                             │
                          attack()
                          guardGate()

! The important distinction:

    Inherited Member
        -> comes from the Base Class

    Own Member
        -> belongs specifically to the Derived Class

    Own Implementation
        -> Derived Class provides its own version
           of an existing behavior

^ In CPP03 Ex01:

    ClapTrap
        -> provides the base functionality

    ScavTrap
        -> inherits that functionality
        -> adds guardGate()
        -> provides its own attack()

! The next concept is understanding what happens
  when a Derived Class provides its own implementation
  of an existing Base Class function.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ A Derived Class can use members inherited from
  its Base Class.

~ Inherited Members come from the Base Class.

~ In CPP03 Ex01, ScavTrap inherits:
  name
  hitPoints
  energyPoints
  attackDamage
  takeDamage()
  beRepaired()

~ A Derived Class can also have its own members.

~ In ScavTrap:
  guardGate()
  -> Own Member

~ A Derived Class can also provide its own implementation
  for an existing Base Class behavior.

~ In ScavTrap:
  attack()
  -> existing behavior with a specialized implementation

~ Therefore, a Derived Class can:
  inherit members
  + add its own members
  + provide its own implementation of existing behavior
*/