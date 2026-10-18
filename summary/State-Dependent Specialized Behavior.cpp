//! State-Dependent Specialized Behavior :

/*
$ A specialized behavior can depend on the current
  state of the Derived Object.

# Example :

    void FragTrap::highFivesGuys(void)
    {
        if (hitPoints == 0)
        {
            ...
            return;
        }

        ...
    }

$ `highFivesGuys()` checks the current state of
  the FragTrap before performing its action.

# Possible States :

    hitPoints > 0
        ↓
    FragTrap is alive
        ↓
    Can request a high five

    hitPoints == 0
        ↓
    FragTrap is dead
        ↓
    Cannot request a high five

# Flow :

    highFivesGuys()
          ↓
    Check hitPoints
          ↓
    ┌───────────────┐
    │               │
    ↓               ↓
hitPoints > 0   hitPoints == 0
    ↓               ↓
Perform action   Reject action
                    ↓
                  return

$ When the state is invalid:

    if (hitPoints == 0)
    {
        ...
        return;
    }

^ `return` stops the function immediately.

$ The same State Validation concept was studied
  previously in ClapTrap.

! The new point here is its use inside a
  Derived-Class-specific behavior.

# Mental Model :

    Action
      ↓
    Check Object State
      ↓
    Is the state valid?
      │
      ├── YES → perform action
      │
      └── NO  → reject action

# Example :

    highFivesGuys()
          ↓
    check hitPoints
          ↓
    > 0  → request high five
    == 0 → cannot request

! The function depends not only on the type
  of the object, but also on its current state.

! Golden Idea :

  Specialized Action
        ↓
  Check Current State
        ↓
  Valid State?
    ↙       ↘
  Yes        No
   ↓          ↓
Perform     Reject
Action      Action



% note :
    A specialized action can depend on the current state 
    of the Derived Object; the action should only proceed 
    when the object's state allows it.

*/
