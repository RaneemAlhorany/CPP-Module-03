// # Construction / Destruction Order

/*

**Classification:** Practical Review

## Construction Order

Consider the inheritance declaration:

```cpp
class DiamondTrap : public ScavTrap, public FragTrap
```

The construction order is:

1. **Virtual base class:** `ClapTrap` is initialized first. The most-derived class, `DiamondTrap`, is responsible for initializing it.
2. **Direct base classes:** `ScavTrap`, followed by `FragTrap`, according to the inheritance declaration.
3. **Data members:** `DiamondTrap` members, including its own `name`.
4. **Constructor body:** The code inside the `DiamondTrap` constructor executes.

**Important:** Construction order follows C++ initialization rules, not the order in which initializers are written in the constructor's initializer list.

## Destruction Order

Destruction happens in reverse order:

1. Execute the `DiamondTrap` destructor body.
2. Destroy `DiamondTrap` data members.
3. Destroy `FragTrap`.
4. Destroy `ScavTrap`.
5. Destroy the shared virtual base, `ClapTrap`, last.

## Mental Model

**Construction:** From the foundational parts toward the most specialized class.

**Destruction:** From the most specialized class back toward the foundational parts.

## Golden Idea

With virtual inheritance, the shared `ClapTrap` base is constructed only once. When creating a `DiamondTrap`, `DiamondTrap` is responsible for initializing that virtual base.
*/