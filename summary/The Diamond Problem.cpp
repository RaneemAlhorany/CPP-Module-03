//! Concept 2 — The Diamond Problem

/*
$ The Diamond Problem occurs when a class inherits
from two classes that share the same Base Class,
creating multiple inheritance paths to that Base Class.

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

! Without Virtual Inheritance :

$ DiamondTrap may contain two separate ClapTrap subobjects.

```
DiamondTrap
   /      \
```

ScavTrap   FragTrap
|          |
ClapTrap   ClapTrap

# Problems :

```
1. Duplicate Base-Class Subobjects
   DiamondTrap may contain two copies of ClapTrap's
   data members, such as hitPoints and energyPoints.

2. Ambiguity
   The compiler may not know which inherited member
   or function should be selected.
```

# Example :

```
DiamondTrap diamond("DR4C");
diamond.takeDamage(20);
```

$ Without Virtual Inheritance, the compiler may report
ambiguity because takeDamage() is accessible through
two separate ClapTrap subobjects.

# Mental Model :

```
One Base Class
      ↓
Two Inheritance Paths
      ↓
Two Base-Class Subobjects
      ↓
Duplicate State and Possible Ambiguity
```

! Golden Idea :

The Diamond Problem arises when multiple inheritance
creates separate subobjects of the same shared Base Class.
*/
