
```cpp
//! Multiple Derived Classes from One Base Class :

/*
$ More than one Derived Class can inherit directly
  from the same Base Class.

# Example :

    class ScavTrap : public ClapTrap
    class FragTrap : public ClapTrap

# Inheritance Structure :

             ClapTrap
             /      \
            /        \
       ScavTrap    FragTrap

$ ScavTrap and FragTrap are both Derived Classes
  of ClapTrap.

! They are independent from each other.

! ScavTrap does NOT inherit from FragTrap.

! FragTrap does NOT inherit from ScavTrap.

$ Both classes have their own direct relationship
  with ClapTrap.

# Shared Base :

    ClapTrap
       ↓
    common Base part

    ScavTrap
       ↓
    has a ClapTrap Base part

    FragTrap
       ↓
    has a ClapTrap Base part

$ Both Derived Classes can share the functionality
  provided by ClapTrap.

# Specialized Behavior :

    ClapTrap
       │
       ├── ScavTrap
       │      └── guardGate()
       │
       └── FragTrap
              └── highFivesGuys()

$ The Base Class contains common functionality,
  while each Derived Class can add or specialize
  its own behavior.

# Mental Model :

                 ClapTrap
                /         \
               ↓           ↓
          ScavTrap       FragTrap
               │             │
         guardGate()   highFivesGuys()

! Multiple Derived Classes can share the same
  Base Class without inheriting from each other.

^ The Derived Classes form independent branches
  from the same Base Class.

! Golden Idea :

  One Base Class
        ↓
  Multiple independent Derived Classes
        ↓
  Shared Base functionality
        +
  Different specialized behavior

//! Summary :
  Multiple Derived Classes can inherit directly from the 
  same Base Class, while remaining independent classes 
  with their own specialized behavior.

*/