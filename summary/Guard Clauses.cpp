//# Guard Clauses 


/*

**Classification:** Previous Concept — Application in CPP03

## Structure

A guard clause checks whether a condition prevents a function from continuing. If the condition is met, the function handles the situation and exits early using `return`.

```cpp
void ScavTrap::attack(const std::string& target)
{
    if (hitPoints == 0)
    {
        std::cout << "Cannot attack: no hit points." << std::endl;
        return;
    }

    if (energyPoints == 0)
    {
        std::cout << "Cannot attack: no energy points." << std::endl;
        return;
    }

    energyPoints--;
    std::cout << "Attacking " << target << std::endl;
}
```

## Why?

Guard clauses prevent a function from performing an operation when its required conditions are not satisfied.

In this example:
- If `hitPoints == 0`, the attack is stopped.
- If `energyPoints == 0`, the attack is stopped.
- Otherwise, the attack continues and consumes one energy point.

## Mental Model

A guard clause acts like a checkpoint:

1. Check whether the operation is allowed.
2. If not, handle the situation and exit.
3. If allowed, continue with the main logic.

## Common Mistake

Forgetting `return` after handling an invalid condition can allow the function to continue executing when it should have stopped.

## Golden Idea

**Check the conditions that prevent an operation before executing its main logic.** Guard clauses make functions easier to read and help prevent invalid behavior.
*/

