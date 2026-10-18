//! Damage Handling :

/*
$ Damage Handling describes how an object processes
damage received by its hit points.

$ In ClapTrap, `takeDamage()` receives the amount of
damage and applies it to `hitPoints`.

# Example :

```
HP = 10

takeDamage(5)

HP = 5
```

$ If the damage is equal to or greater than the
current HP, the HP becomes 0.

# Example :

```
HP = 5

takeDamage(8)

HP = 0
```

! HP should not become negative.

^ The object reaches a dead state when its HP becomes 0.

# General Flow :

```
takeDamage(amount)
    ↓
Check current state
    ↓
Compare damage with HP
    ↓
HP -= damage
or
HP = 0
```

! Damage Handling changes the object's state by
reducing its hit points.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Damage Handling describes how received damage
affects an object's HP.

~ `takeDamage()` reduces `hitPoints`.

~ If damage is less than HP:
HP -= damage

~ If damage is equal to or greater than HP:
HP = 0

~ HP should not become negative.

~ Reaching 0 HP represents the object's dead state.
*/
