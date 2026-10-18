//! Concept 5 — Name Hiding / Member Name Collision

/*
$ Name Hiding occurs when a member declared in a Derived Class
has the same name as a member inherited from a Base Class.

# Example :

```
class ClapTrap
{
protected:
    std::string name;
};

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
};
```

$ DiamondTrap::name and ClapTrap::name are two distinct
data members belonging to different classes.

# Accessing the Members :

```
name
```

$ Refers to DiamondTrap::name inside a DiamondTrap member
function when this member hides the inherited name.

```
ClapTrap::name
```

$ Explicitly refers to the name member declared in ClapTrap.

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

$ DiamondTrap::name stores the DiamondTrap name.

$ ClapTrap::name stores the name initialized in the
shared ClapTrap subobject.

# whoAmI() :

```
void DiamondTrap::whoAmI()
{
    std::cout << name << std::endl;
    std::cout << ClapTrap::name << std::endl;
}
```

$ The first expression accesses DiamondTrap::name.

$ The second expression explicitly accesses ClapTrap::name.

# Mental Model :

```
Same Member Name
      ↓
Different Class Scopes
      ↓
Different Data Members
      ↓
Scope Resolution Selects the Intended Member
```

! Golden Idea :

Two members can share the same name while remaining
distinct members of different classes.
Scope resolution makes the intended member explicit.
*/

