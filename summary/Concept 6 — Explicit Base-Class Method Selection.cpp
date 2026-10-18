// # Explicit Base-Class Method Selection

/*
**Classification:** Application of a Previous Concept

## Structure

When a class inherits from multiple base classes, we can explicitly select which implementation of a function to call using the **Scope Resolution Operator (`::`)**.

```cpp
void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
```

## Why?

Different classes may provide different implementations of a function with the same name:

- `ClapTrap::attack()` → Uses `ClapTrap` behavior.
- `ScavTrap::attack()` → Uses `ScavTrap` behavior.
- `DiamondTrap::attack()` → Selects `ScavTrap` behavior, as required by the exercise.

## Mental Model

`ScavTrap::attack(target)` means:

> Call the `attack()` implementation defined in `ScavTrap` specifically.

Calling `ClapTrap::attack(target)` would directly invoke the base-class implementation instead of using `ScavTrap`'s implementation.

## In DiamondTrap

- Hit points → `FragTrap` values.
- Energy points → `ScavTrap` values.
- Attack damage → `FragTrap` values.
- Attack behavior → `ScavTrap::attack()`.

## Golden Idea

Having functions with the same name does not mean they have the same behavior. Explicitly select the required implementation when necessary.

*/