//! Action Cost :

/*
$ Action Cost describes the resource that an action
consumes when it is performed.

$ In ClapTrap, some behaviors have an Energy cost.

# Example :

```
attack()
    -> costs 1 Energy

beRepaired()
    -> costs 1 Energy

takeDamage()
    -> costs no Energy
```

^ When an action is successfully performed, its required
resource is consumed.

# Example :

```
Energy = 3

attack()
    ↓
Energy = 2
```

$ An action cannot be performed when the required
resource is unavailable.

# Example :

```
Energy = 0

attack()
    ↓
Action cannot be performed
```

! The resource is consumed only when the action
is actually performed.

^ Action Cost connects a behavior with the resource
required to perform that behavior.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Action Cost describes the resource consumed by
an action.

~ In ClapTrap:
attack()      -> costs 1 Energy
beRepaired()  -> costs 1 Energy
takeDamage()  -> costs no Energy

~ The required resource is consumed when the action
is successfully performed.

~ An action cannot be performed when its required
resource is unavailable.
*/
