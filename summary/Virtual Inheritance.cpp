//! Concept 3 — Virtual Inheritance

/*
$ Virtual Inheritance allows multiple inheritance paths
to share a single subobject of the same virtual Base Class.

# Syntax :

```
class ScavTrap : virtual public ClapTrap
{
    // ...
};

class FragTrap : virtual public ClapTrap
{
    // ...
};
```

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

$ When both inheritance paths use Virtual Inheritance,
DiamondTrap contains one shared ClapTrap subobject.

# Without Virtual Inheritance :

```
DiamondTrap
   /      \
```

ScavTrap   FragTrap
|          |
ClapTrap   ClapTrap

$ Two separate ClapTrap subobjects may exist.

# With Virtual Inheritance :

```
DiamondTrap
   /      \
```

ScavTrap   FragTrap
\      /
Shared ClapTrap

$ Virtual Inheritance prevents duplication of the shared
virtual Base-Class subobject.

# Important Distinction :

$ Virtual Inheritance does not merge ScavTrap and FragTrap.
They remain separate Base Classes with their own behavior.

$ Only the shared ClapTrap subobject is shared.

# Mental Model :

```
Multiple Inheritance Paths
          ↓
   Virtual Inheritance
          ↓
One Shared Virtual Base Subobject
```

! Golden Idea :

Virtual Inheritance ensures that a shared virtual Base Class
appears only once in the most-derived object.
*/

