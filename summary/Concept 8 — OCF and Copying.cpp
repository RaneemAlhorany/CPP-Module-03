// ! OCF and Copying

/*
**Classification:** Previous Concept — Practical Review

## The Orthodox Canonical Form (OCF)

The four core functions reviewed here are:

```cpp
DiamondTrap();
DiamondTrap(const DiamondTrap& other);
DiamondTrap& operator=(const DiamondTrap& other);
~DiamondTrap();
```

The exercise also requires a parameterized constructor that accepts a name.

## Copy Constructor

```cpp
DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other),
      ScavTrap(other),
      FragTrap(other),
      name(other.name)
{
    *this = other;
}
```

The purpose is to:

- Initialize the shared `ClapTrap` base from `other`.
- Initialize the direct base-class subobjects.
- Copy the `DiamondTrap`-specific `name`.
- Perform assignment in the constructor body, as this implementation does. This extra assignment is not inherently necessary if all members have already been copied correctly.

**Important:** When constructing a `DiamondTrap`, only `DiamondTrap` initializes the shared virtual `ClapTrap` base. The virtual-base initializers inside `ScavTrap` and `FragTrap` are ignored for this construction.

## Copy Assignment Operator

```cpp
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
    if (this != &other)
    {
        ClapTrap::operator=(other);
        name = other.name;
    }
    return *this;
}
```

- `this != &other` prevents self-assignment.
- `ClapTrap::operator=(other)` copies the shared base-class state.
- `name = other.name` copies the `DiamondTrap`-specific name.
- `return *this` allows the assignment expression to return the current object.

## Mental Model

Copying must preserve both parts:

- **Shared base data:** `ClapTrap` state, such as its name, hit points, energy points, and attack damage.
- **Derived-class data:** The separate `DiamondTrap::name`.

## Golden Idea

When reviewing copying in multiple inheritance, ensure the shared virtual base is copied correctly and every derived-class member is preserved.

Do not confuse:

- **Copy Constructor:** Creates a new object from an existing object.
- **Copy Assignment Operator:** Updates an already existing object using another object.

*/