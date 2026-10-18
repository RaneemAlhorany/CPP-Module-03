//! Protected Access Specifier :

/*
$ `protected` is an access specifier that allows
  members to be accessed from the class itself and
  from its Derived Classes.

$ A protected member cannot be accessed directly
  from outside the class.

# Example :

    class ClapTrap
    {
    protected:
        unsigned int hitPoints;
    };

^ `hitPoints` can be accessed by:

    ClapTrap
        -> Yes

    ScavTrap
        -> Yes, because it is a Derived Class

    main()
        -> No, because it is outside the class

$ In CPP03 Ex01, ClapTrap's attributes are protected:

    name
    hitPoints
    energyPoints
    attackDamage

^ This allows ScavTrap to access them directly.

# Example :

    ScavTrap::ScavTrap(const std::string& name)
        : ClapTrap(name)
    {
        hitPoints = 100;
        energyPoints = 50;
        attackDamage = 20;
    }

! The Derived Class can access these members because
  they are protected.

$ Protected provides a middle level of access:

    private
        -> class only

    protected
        -> class + Derived Classes

    public
        -> class + Derived Classes + outside code

^ The important difference is that protected members
  remain inaccessible directly from outside the class.

# Mental Model :

    ClapTrap
    │
    ├── protected
    │   ├── name
    │   ├── hitPoints
    │   ├── energyPoints
    │   └── attackDamage
    │
    ↓ inheritance

    ScavTrap
    │
    └── can access them directly

! `protected` is useful when a Base Class needs to
  keep its members protected from outside code while
  allowing Derived Classes to use them.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ `protected` is an access specifier.

~ Protected members can be accessed inside the
  class itself.

~ Protected members can also be accessed by
  Derived Classes.

~ Protected members cannot be accessed directly
  from outside the class.

~ In CPP03 Ex01, ClapTrap uses protected for:
  name
  hitPoints
  energyPoints
  attackDamage

~ This allows ScavTrap to access and modify these
  inherited members directly.

~ Access levels:

  private   -> class only
  protected -> class + Derived Classes
  public    -> class + Derived Classes + outside

~ The main idea:
  protected = accessible to the class and its
  Derived Classes, but protected from outside access.
*/

