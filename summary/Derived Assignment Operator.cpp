//! Derived Assignment Operator :

/*
$ Assignment Operator is used when the object already
  exists and we want to assign another object's values
  to it.

# Example :

    ScavTrap a("Robot");
    ScavTrap b("Enemy");

    b = a;

^ `b` already exists.

^ We are assigning the contents of `a` to `b`.

! This is different from Copy Constructor.

# Copy Constructor :

    ScavTrap b(a);

^ Creates a NEW object `b`
  using `a` as the source.

# Assignment Operator :

    b = a;

^ `b` already exists.
^ Its existing contents are replaced/updated.

////////////////////////////////////////////////////

//! Derived Assignment :

$ A ScavTrap object contains:

    ScavTrap
        │
        ├── ClapTrap part
        └── ScavTrap part

^ Therefore, assigning one ScavTrap to another
  must also handle the Base Class part.

# Example :

    ScavTrap& ScavTrap::operator=(const ScavTrap& other)
    {
        ClapTrap::operator=(other);

        return *this;
    }

^ `ClapTrap::operator=(other)` calls the Base Class
  Assignment Operator.

^ This assigns the inherited/Base part.

^ `return *this` returns the current object itself
  as a reference.

# Conceptual Flow :

    b = a
      ↓
    ScavTrap::operator=(a)
      ↓
    ClapTrap::operator=(a)
      ↓
    Assign Base part
      ↓
    Assign Derived part
      ↓
    return *this

! Important distinction :

    ScavTrap b(a);
        -> Copy Constructor
        -> creates a new object

    b = a;
        -> Assignment Operator
        -> object already exists

! Golden Idea:

  Copy Constructor
      -> constructs a NEW object from another object.

  Assignment Operator
      -> assigns an EXISTING object from another object.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Derived Assignment Operator handles assignment
  between existing Derived objects.

~ The Base part must also be assigned.

~ Therefore:

    ClapTrap::operator=(other);

  is used to assign the Base Class part.

~ `return *this;`
  -> returns the current object by reference.

~ Main difference:

    ScavTrap b(a);
        = Copy Constructor

    b = a;
        = Assignment Operator

~ Both operations must properly handle the
  Base Class part of the Derived Object.
*/