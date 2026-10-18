//! Object State & State Changes :

/*
$ Object State is the set of current values that
  describe the condition of an object at a given time.

$ The state of an object can change during its lifetime
  when its member functions modify its attributes.

# Example :

    ClapTrap clap("CL4P-TP");

    Initial State:

    HP     = 10
    Energy = 10
    Attack = 0

    clap.attack("Bandit");

    New State:

    HP     = 10
    Energy = 9
    Attack = 0

$ Different member functions can change different
  parts of the object's state.

    attack()
        -> decreases Energy

    takeDamage()
        -> decreases HP

    beRepaired()
        -> increases HP
        -> decreases Energy

! The behavior of an object can depend on its
  current state.

# Example :

    HP > 0 && Energy > 0
        -> can attack

    HP == 0
        -> cannot act

    Energy == 0
        -> cannot attack or repair

^ The object starts with an initial state,
  and its state changes as it performs actions.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Object State is the current condition of an object.

~ State is represented by the object's current values.

~ Member functions can change the object's state.

~ Different operations can modify different parts
  of the state.

~ Object behavior can depend on its current state.

~ In ClapTrap:
  attack()      -> decreases Energy
  takeDamage()  -> decreases HP
  beRepaired()  -> increases HP and decreases Energy
*/