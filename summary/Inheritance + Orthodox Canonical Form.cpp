//! Inheritance + Orthodox Canonical Form :

/*
$ A Derived Class still has its own Orthodox
  Canonical Form (OCF), even when it inherits
  from a Base Class.

# Base Class :

    class ClapTrap
    {
    public:
        ClapTrap();
        ClapTrap(const ClapTrap& other);
        ClapTrap& operator=(const ClapTrap& other);
        ~ClapTrap();
    };

# Derived Class :

    class ScavTrap : public ClapTrap
    {
    public:
        ScavTrap();
        ScavTrap(const ScavTrap& other);
        ScavTrap& operator=(const ScavTrap& other);
        ~ScavTrap();
    };

^ Both Classes have their own OCF.

! ScavTrap does NOT simply rely on ClapTrap's
  OCF instead of having its own.

////////////////////////////////////////////////////

//! The Base Part :

$ A ScavTrap object contains a ClapTrap part.

    ScavTrap
        │
        ├── ClapTrap part
        │
        └── ScavTrap-specific part

^ Therefore, ScavTrap's OCF operations must also
  properly handle the Base Class part.

////////////////////////////////////////////////////

//! Construction :

    ScavTrap scav;

^ Construction happens in this order:

    ClapTrap constructor
          ↓
    ScavTrap constructor

$ Base is constructed before Derived.

////////////////////////////////////////////////////

//! Copy Construction :

    ScavTrap b(a);

^ The Derived Copy Constructor creates `b`.

    ScavTrap::ScavTrap(const ScavTrap& other)
        : ClapTrap(other)
    {
    }

^ `ClapTrap(other)` calls the Base Copy Constructor
  to copy the Base part.

////////////////////////////////////////////////////

//! Assignment :

    b = a;

^ The Derived Assignment Operator handles the
  assignment of the existing object.

    ScavTrap& ScavTrap::operator=(
        const ScavTrap& other)
    {
        ClapTrap::operator=(other);
        return *this;
    }

^ `ClapTrap::operator=(other)` assigns the Base part.

////////////////////////////////////////////////////

//! Destruction :

    ScavTrap scav;

^ Destruction happens in reverse order:

    ScavTrap destructor
          ↓
    ClapTrap destructor

$ Derived is destroyed before Base.

////////////////////////////////////////////////////

//! Mental Model :

    ClapTrap
        │
        │  own OCF
        ↓
    ScavTrap
        │
        │  own OCF
        ↓
    handles its own part
    + Base Class part

! ScavTrap's OCF is not a replacement for
  ClapTrap's OCF.

! Each Class has its own OCF, while the Derived
  Class must properly interact with its Base part.

////////////////////////////////////////////////////

//! Summary :

/*
~ Both Base and Derived Classes can have their
  own Orthodox Canonical Form.

~ ScavTrap has its own:

    Default Constructor
    Copy Constructor
    Copy Assignment Operator
    Destructor

~ A ScavTrap object contains a ClapTrap Base part.

~ Therefore, ScavTrap's OCF must properly handle
  that Base part.

~ Construction:

    Base
      ↓
    Derived

~ Copy Construction:

    ScavTrap Copy Constructor
          ↓
    ClapTrap Copy Constructor

~ Assignment:

    ScavTrap Assignment Operator
          ↓
    ClapTrap Assignment Operator

~ Destruction:

    Derived
      ↓
    Base

! Golden Idea:

  Derived Class has its own OCF,
  but its OCF must account for the
  Base Class part.
*/

