//! Dead / Inactive State :

/*
$ A Dead or Inactive State is a state in which an
object can no longer perform its normal actions.

$ In ClapTrap, the object reaches this state when:

```
hitPoints == 0
```

# Example :

```
HP = 5

takeDamage(5)

HP = 0
```

^ The ClapTrap has reached its dead state.

! When HP reaches 0, the ClapTrap cannot perform
its normal actions.

# Example :

```
HP = 0

attack()
    -> cannot attack

beRepaired()
    -> cannot repair
```

$ The dead state is reached through a state change,
such as receiving enough damage.

^ The object's state determines which behaviors
are allowed.

# General Flow :

```
Damage
    ↓
HP decreases
    ↓
HP reaches 0
    ↓
Dead / Inactive State
    ↓
Normal actions are blocked
```

*/

////////////////////////////////////////////////////

//! Summary :

/*
~ A Dead / Inactive State means the object can no
longer perform its normal actions.

~ In ClapTrap, HP == 0 represents the dead state.

~ A dead ClapTrap cannot attack.

~ A dead ClapTrap cannot repair itself.

~ The object's state determines which behaviors
are allowed.

~ Receiving enough damage can move the object
into the dead state.
*/
