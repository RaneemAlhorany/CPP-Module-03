//! Healing / Repair Handling :

/*
$ Repair Handling describes how an object restores
its hit points after receiving damage.

$ In ClapTrap, `beRepaired()` increases the object's
`hitPoints`.

# Example :

```
HP = 5
Energy = 3

beRepaired(4)

HP = 9
Energy = 2
```

$ Repair requires the object to:

```
1. Have hit points.
2. Have available energy.
```

^ If both conditions are satisfied, the repair
is performed.

# General Flow :

```
beRepaired(amount)
    ↓
Check HP
    ↓
Check Energy
    ↓
Increase HP
    ↓
Decrease Energy by 1
```

! A repair action cannot be performed when the
object has 0 HP or 0 Energy.

$ Repair is the opposite state change of damage:

```
Damage → decreases HP
Repair → increases HP
```

^ Repair also has an Action Cost of 1 Energy.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Repair Handling describes how an object restores HP.

~ `beRepaired()` increases `hitPoints`.

~ Repair requires HP > 0.

~ Repair requires available Energy.

~ A successful repair increases HP and consumes
1 Energy.

~ Damage decreases HP, while repair increases HP.
*/
