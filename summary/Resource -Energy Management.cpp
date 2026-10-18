//! Resource / Energy Management :

/*
$ Resource Management is the handling of a limited
  resource that an object needs to perform certain
  actions.

$ In ClapTrap, energyPoints represents a limited
  resource used by some actions.

$ Each attack and repair consumes 1 energy point.

# Example :

    Energy = 10

    attack()
        -> Energy = 9

    beRepaired(5)
        -> Energy = 8

$ When the available energy reaches 0, the ClapTrap
  cannot perform actions that require energy.

# Example :

    Energy = 0

    attack()
        -> cannot attack

    beRepaired(5)
        -> cannot repair

! Energy is part of the object's state, but it also
  acts as a limited resource that controls which
  actions the object can perform.

^ An action consumes the resource when it is performed.

^ The object must check that the required resource
  is available before performing the action.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Energy is a limited resource used by ClapTrap.

~ attack() consumes 1 energy point.

~ beRepaired() consumes 1 energy point.

~ Actions requiring energy cannot be performed
  when Energy reaches 0.

~ The object checks the available resource before
  performing the action.

~ Energy is part of the object's state and controls
  some of its possible actions.
*/