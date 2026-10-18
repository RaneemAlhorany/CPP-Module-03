//! Adding New Specialized Behavior :

/*
$ A Derived Class can add completely new behavior
  that does not exist in the Base Class.

# Example :

    void FragTrap::highFivesGuys(void);

$ `highFivesGuys()` exists only in FragTrap.

! It is NOT inherited from ClapTrap.

! It is NOT an override of a Base Class function.

! It is a completely new function added by
  the Derived Class.

# Three Types of Behavior :

1. Inherited Behavior :

    ClapTrap
       ↓
    takeDamage()
       ↓
    FragTrap

$ The function already exists in the Base Class
  and can be used by the Derived Class.

2. Overridden Behavior :

    ClapTrap::attack()
            ↓
    ScavTrap::attack()

$ The function exists in the Base Class, but the
  Derived Class provides its own implementation.

3. New Specialized Behavior :

    FragTrap
       ↓
    highFivesGuys()

$ The function does not exist in ClapTrap.
  It is added specifically by FragTrap.

# Example :

    void FragTrap::highFivesGuys(void)
    {
        if (hitPoints == 0)
        {
            ...
            return;
        }

        ...
    }

$ `highFivesGuys()` can use inherited members such as:

    hitPoints
    name

$ This is possible because FragTrap has access
  to the inherited Base Class members.

# Specialized Behaviors :

    ScavTrap
        ↓
    guardGate()

    FragTrap
        ↓
    highFivesGuys()

$ Each Derived Class can add its own capabilities
  without adding them to the Base Class.

# Mental Model :

                 ClapTrap
                    │
             Common abilities
                    │
          ┌─────────┴─────────┐
          ↓                   ↓
      ScavTrap             FragTrap
          │                   │
     guardGate()        highFivesGuys()

! The Base Class provides the common foundation.

! The Derived Class can extend that foundation
  with its own specialized behavior.

! Golden Idea :

  Base Class
      ↓
  Common Behavior

  Derived Class
      ↓
  New Specialized Behavior


! Summary :
  A Derived Class can add completely new behavior
  that does not exist in the Base Class.

! note :
    A Derived Class can add completely new behavior 
    that does not exist in the Base Class.

*/
