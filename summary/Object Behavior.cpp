//! Object Behavior :

/*
$ Object Behavior describes the actions that an object
can perform.

$ In ClapTrap, the main behaviors are:

```
attack()
takeDamage()
beRepaired()
```

$ Each behavior represents an action that can be
performed by the object.

# Example :

```
ClapTrap clap("CL4P-TP");

clap.attack("Bandit");
```

^ The object performs the `attack` behavior.

$ A behavior can depend on the current state of
the object.

# Example :

```
attack()
    ↓
Check HP and Energy
    ↓
Perform Action
    ↓
Decrease Energy
```

! The behavior can also change the object's state.

# Example :

```
beRepaired(3)

HP     += 3
Energy -= 1
```

^ Therefore, an object's behavior can read its current
state, perform an action, and change its state.

$ General Flow :

```
Behavior
    ↓
Validate State
    ↓
Perform Action
    ↓
Change State
```

! In ClapTrap, attack(), takeDamage(), and beRepaired()
represent actions the object can perform.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Object Behavior describes what an object can do.

~ Behaviors are represented by member functions that
perform actions.

~ In ClapTrap:
attack()      -> attacks a target
takeDamage()  -> receives damage
beRepaired()  -> restores HP

~ A behavior can depend on the object's current state.

~ A behavior can change the object's state.

~ Actions can follow the flow:
Validate State → Perform Action → Change State.
*/
