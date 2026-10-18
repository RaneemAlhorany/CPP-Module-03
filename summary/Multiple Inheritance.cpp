//! Concept 1 — Multiple Inheritance

/*
$ Multiple Inheritance allows a Derived Class to inherit
from more than one Base Class.

# Structure :

```
         ClapTrap
         /      \
        ↓        ↓
   ScavTrap    FragTrap
        \        /
         ↓      ↓
       DiamondTrap
```

$ DiamondTrap inherits from both ScavTrap and FragTrap.

# Example :

```
class DiamondTrap : public ScavTrap, public FragTrap
{
    // ...
};
```

$ DiamondTrap can access the accessible members inherited
from both parent classes, according to C++ inheritance rules.

# Inherited Behavior :

```
From ScavTrap :
    attack()
    guardGate()

From FragTrap :
    highFivesGuys()

From ClapTrap :
    takeDamage()
    beRepaired()
```

$ ScavTrap and FragTrap both inherit from ClapTrap,
so DiamondTrap indirectly inherits from ClapTrap
through both inheritance paths.

# Different Characteristics :

```
ScavTrap :
    hitPoints     = 100
    energyPoints  = 50
    attackDamage  = 20

FragTrap :
    hitPoints     = 100
    energyPoints  = 100
    attackDamage  = 30
```

$ Each Derived Class specializes the behavior and
characteristics inherited from ClapTrap.

! These values describe the individual classes'
specializations. They do not mean that DiamondTrap
automatically contains two independent sets of
ClapTrap data members.

# Mental Model :

```
    Multiple Base Classes
             ↓
    Multiple Inheritance
             ↓
    Combined Accessible Behavior
             ↓
    A More Specialized Derived Class
```

! Golden Idea :

Multiple Inheritance allows one Derived Class to inherit
accessible behavior and members from multiple Base Classes.
*/


