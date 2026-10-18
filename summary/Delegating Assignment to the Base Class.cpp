//! Delegating Assignment to the Base Class :

/*
$ A Derived Class contains a Base Class part.

$ When assigning one Derived Object to another,
  the Base Class part must also be assigned.

# Example :

    ScavTrap& ScavTrap::operator=(const ScavTrap& other)
    {
        if (this != &other)
            ClapTrap::operator=(other);

        return *this;
    }

^ `ClapTrap::operator=(other)` explicitly calls
  the Assignment Operator of the Base Class.

$ The Base Class is responsible for assigning
  its own members.

# Example :

    ClapTrap::operator=(other)

    -> copies:
       name
       hitPoints
       energyPoints
       attackDamage

! The Derived Class does not need to manually
  copy the Base Class members again.

$ Responsibility is divided:

    ScavTrap::operator=
        ↓
    handles Derived assignment
        ↓
    delegates Base part
        ↓
    ClapTrap::operator=
        ↓
    handles Base Class members

# Mental Model :

    ScavTrap
    │
    ├── ClapTrap part
    │      ↓
    │   ClapTrap::operator=
    │
    └── Derived part
           ↓
       ScavTrap::operator=

! `ClapTrap::` specifies that we want the
  Base Class implementation of `operator=`.

^ This is called Delegating Assignment to
  the Base Class.

! It does NOT create a new Base Object.

! It simply calls the Base Class Assignment
  Operator to handle the existing Base part.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ A Derived Class can delegate the assignment
  of its Base part to the Base Class.

~ In ScavTrap:

    ClapTrap::operator=(other);

  calls the Base Class Assignment Operator.

~ The Base Class is responsible for assigning
  its own members.

~ The Derived Class is responsible for completing
  the assignment of the Derived Object.

~ This avoids manually copying Base Class members
  again inside the Derived Class.

~ `ClapTrap::` explicitly selects the Base Class
  implementation.

! Golden Idea:

  Derived Assignment
        ↓
  Delegate Base part
        ↓
  Base Assignment Operator
        ↓
  Base handles its own members
*/

