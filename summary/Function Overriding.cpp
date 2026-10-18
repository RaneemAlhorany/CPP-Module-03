//! Function Overriding :

/*
$ Function Overriding happens when a Derived Class
  provides its own implementation for a function
  that already exists in the Base Class.

# Example :

    class ClapTrap
    {
    public:
        void attack(const std::string& target);
    };

    class ScavTrap : public ClapTrap
    {
    public:
        void attack(const std::string& target);
    };

^ `attack()` already exists in ClapTrap.

^ ScavTrap provides its own implementation of
  `attack()`.

$ The Derived Class can therefore specialize an
  existing behavior inherited from the Base Class.

# In CPP03 Ex01 :

    ClapTrap
        attack()
            ↓
        Base implementation

    ScavTrap
        attack()
            ↓
        ScavTrap implementation

! The ScavTrap version is used to provide behavior
  specific to ScavTrap.

$ This is different from adding a completely new
  function.

# Example :

    guardGate()

^ `guardGate()` does not exist in ClapTrap.

^ Therefore, it is an Own / New Function,
  not an overridden function.

! The distinction:

    attack()
        -> already exists in Base Class
        -> ScavTrap provides its own implementation
        -> Function Overriding

    guardGate()
        -> does not exist in Base Class
        -> new behavior of ScavTrap
        -> Own Function

^ Function Overriding allows a Derived Class to
  specialize an existing behavior while keeping
  the inheritance relationship.

! In our project, ScavTrap overrides `attack()` so
  its attack behavior can be specific to ScavTrap.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Function Overriding means that a Derived Class
  provides its own implementation for a function
  that already exists in the Base Class.

~ In CPP03 Ex01:
  ClapTrap::attack()
      -> Base implementation

  ScavTrap::attack()
      -> Derived implementation

~ The Derived Class uses overriding to specialize
  an existing behavior.

~ `guardGate()` is not overriding because it does
  not exist in ClapTrap.

~ Therefore:

  Existing Base Function
      +
  Derived implementation
      =
  Function Overriding
*/