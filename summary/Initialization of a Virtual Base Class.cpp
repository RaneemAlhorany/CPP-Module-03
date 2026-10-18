//! Concept 4 — Initialization of a Virtual Base Class

/*
$ When a class uses Virtual Inheritance, the Most-Derived
Class is responsible for initializing the virtual Base Class.

# Structure :

```
         ClapTrap
         /      \
    ScavTrap    FragTrap
         \      /
       DiamondTrap
```

$ When constructing a DiamondTrap object,
DiamondTrap initializes the shared ClapTrap subobject.

# Example :

```
DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(),
      FragTrap(),
      name(name)
{
    // ...
}
```

$ ClapTrap(...) initializes the shared virtual Base subobject
when the object being constructed is a DiamondTrap.

# Important Rule :

```
Most-Derived Class
        ↓
Initializes Virtual Base Classes
```

$ ScavTrap and FragTrap can specify their own ClapTrap
initialization, but those initializers are ignored
for the virtual Base subobject when constructing DiamondTrap.

$ Their initializers still matter when constructing
ScavTrap or FragTrap objects independently.

# Construction Order :

```
1. Virtual Base Classes
2. Direct Non-Virtual Base Classes
3. Data Members
4. Constructor Body
```

$ The actual initialization order follows C++ rules,
not merely the textual order of the initializer list.

! Golden Idea :

The Most-Derived Class controls the initialization
of a shared virtual Base-Class subobject.
*/
