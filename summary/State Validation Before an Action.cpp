//! State Validation Before an Action :

/*
$ State Validation means checking the current state
  of an object before allowing it to perform an action.

$ An action should only be performed when the object's
  current state satisfies the required conditions.

# Example :

    if (hitPoints > 0 && energyPoints > 0)
    {
        // perform attack
    }

^ The object first checks:

    1. Does it have hit points?
    2. Does it have energy points?

^ If both conditions are satisfied, the action is
  performed.

^ Otherwise, the action is rejected.

# Example :

    Energy = 0

    attack()
        ↓
    Check state
        ↓
    Cannot attack

! State validation happens before changing the
  object's state.

$ The general flow is:

    Request Action
        ↓
    Validate State
        ↓
    Perform Action
        ↓
    Update State

! In ClapTrap, this prevents actions when the
  object has no hit points or no energy points.
*/

////////////////////////////////////////////////////

//! Summary :

/*
~ Checks the object's current state before an action.

~ An action is performed only when its required
  conditions are satisfied.

~ Invalid state prevents the action from happening.

~ Validation happens before changing the state.

~ In ClapTrap, HP and Energy are checked before
  performing actions.
*/

