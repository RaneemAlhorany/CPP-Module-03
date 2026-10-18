# CPP-Module-03
# CPP Module 03 — Inheritance

## Introduction

CPP Module 03 introduces **Inheritance** in C++ through a hierarchy of robot classes.

The module begins with `ClapTrap`, extends its behavior through `ScavTrap` and `FragTrap`, and finishes with `DiamondTrap`, which combines both derived classes.

The main objective is to understand how classes reuse existing functionality, customize inherited behavior, initialize their base classes, and resolve ambiguity in multiple inheritance.

## Module Structure

| Exercise | Class         | Main Focus                               |
| -------- | ------------- | ---------------------------------------- |
| ex00     | `ClapTrap`    | Base class foundation                    |
| ex01     | `ScavTrap`    | Single inheritance and method overriding |
| ex02     | `FragTrap`    | Independent derived-class specialization |
| ex03     | `DiamondTrap` | Multiple and virtual inheritance         |

---

# Concept 01 — Base Class and Class Design

**Exercise:** `ex00 — ClapTrap`

## 1. Introduction

A base class defines shared attributes and behaviors that can later be reused by other classes.

`ClapTrap` is the foundation of the entire hierarchy. It manages hit points, energy points, attack damage, and basic robot actions.

## 2. Why It Matters

Without a common base class, every robot would need to implement the same attributes and functions independently.

A base class reduces code duplication and provides a common structure for related objects.

## 3. Core Idea

A class groups data and behavior into one unit.

```cpp
class ClapTrap
{
private:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
```

The exact access level of the attributes depends on the implementation and the requirements of later exercises.

### Main Attributes

| Attribute     |        Default Value | Purpose                    |
| ------------- | -------------------: | -------------------------- |
| Name          | Constructor argument | Identifies the robot       |
| Hit points    |                   10 | Represents health          |
| Energy points |                   10 | Limits available actions   |
| Attack damage |                    0 | Determines attack strength |

### Main Functions

- `attack(target)`: Attacks a target and consumes energy.
- `takeDamage(amount)`: Reduces hit points.
- `beRepaired(amount)`: Restores hit points and consumes energy.

A robot cannot perform actions when it has no hit points or no energy points remaining, as applicable.

## 4. Mental Model

Think of `ClapTrap` as a general robot blueprint.

It defines what every basic robot knows and can do, while later classes will specialize that blueprint.

## 5. Common Mistakes

- Forgetting to initialize attributes.
- Allowing actions when the robot has no energy.
- Allowing a defeated robot to continue acting.
- Updating hit points incorrectly when damage or repair is applied.
- Repeating the same logic in every derived class instead of reusing the base class.

## 6. Previous Concepts Applied

**Previous Concept — Classes and Encapsulation**

The class structure, access specifiers, constructors, and member functions build on earlier C++ modules.

**Previous Concept — Orthodox Canonical Form (OCF)**

The class may require a default or parameterized constructor, copy constructor, copy assignment operator, and destructor according to the subject and implementation.

These are existing concepts, not new inheritance concepts.

## 7. Key Takeaway

A base class establishes shared state and behavior that derived classes can reuse and extend.

---

# Concept 02 — Single Inheritance and Method Overriding

**Exercise:** `ex01 — ScavTrap`

## 1. Introduction

Inheritance allows a derived class to acquire accessible members and behavior from a base class.

`ScavTrap` inherits from `ClapTrap` and specializes it with different statistics, a customized attack message, and a new ability.

## 2. Why It Matters

Inheritance allows us to extend an existing class without rebuilding all its functionality.

Instead of duplicating the basic robot implementation, `ScavTrap` reuses `ClapTrap` and adds its own behavior.

## 3. Core Idea

### Inheritance Syntax

```cpp
class ScavTrap : public ClapTrap
{
public:
    void attack(const std::string& target);
    void guardGate();
};
```

The syntax `: public ClapTrap` establishes a public inheritance relationship.

### ScavTrap Statistics

| Attribute     | ClapTrap | ScavTrap |
| ------------- | -------: | -------: |
| Hit points    |       10 |      100 |
| Energy points |       10 |       50 |
| Attack damage |        0 |       20 |

The derived constructor must initialize the inherited state appropriately.

### Constructor Chaining

```cpp
ScavTrap::ScavTrap(const std::string& name)
    : ClapTrap(name)
{
    // Initialize ScavTrap-specific statistics.
}
```

The base-class constructor runs before the derived-class constructor body.

When the object is destroyed, the derived-class destructor runs before the base-class destructor.

### Method Overriding

`ScavTrap` provides its own implementation of `attack()`.

```cpp
void ScavTrap::attack(const std::string& target)
{
    // ScavTrap-specific attack behavior.
}
```

This allows the derived class to customize an inherited function.

In this exercise, the function has the same signature as the base-class function, but its implementation produces different behavior.

### A New Ability

```cpp
void ScavTrap::guardGate()
{
    // Display the Gate Keeper mode message.
}
```

`guardGate()` is specific to `ScavTrap`; it is not inherited from `ClapTrap`.

## 4. Construction and Destruction Order

For a `ScavTrap` object:

**Construction**

1. `ClapTrap` constructor.
2. `ScavTrap` constructor.

**Destruction**

1. `ScavTrap` destructor.
2. `ClapTrap` destructor.

This order guarantees that the base-class portion is initialized before the derived-class portion is constructed.

## 5. Mental Model

`ScavTrap` is a specialized `ClapTrap`.

It keeps the basic robot functionality but changes its statistics and attack behavior and introduces a gate-keeping ability.

## 6. Common Mistakes

- Forgetting to initialize the base class in the derived constructor.
- Replacing inherited behavior unnecessarily.
- Confusing overriding with creating an unrelated function.
- Assuming private base-class members are directly accessible in the derived class.
- Ignoring constructor and destructor order.

## 7. Previous Concepts Applied

**Previous Concept — Constructors and Destructors**

These are applied to a hierarchy rather than to a standalone class.

**Previous Concept — OCF**

Copy construction and assignment remain relevant to derived classes.

**Previous Concept — Guard Clauses**

Early-return conditions can prevent invalid actions when the robot is defeated or has no energy.

## 8. Key Takeaway

Single inheritance lets a derived class reuse a base class and customize selected behavior without duplicating the entire implementation.

---

# Concept 03 — Derived-Class Specialization and Comparison

**Exercise:** `ex02 — FragTrap`

## 1. Introduction

`FragTrap` is another class derived from `ClapTrap`.

Like `ScavTrap`, it specializes the base class, but it has different statistics and its own special ability.

This exercise reinforces inheritance by requiring two sibling classes to share a base class while remaining distinct from each other.

## 2. Why It Matters

Not every derived class needs to extend another derived class.

Two classes can inherit independently from the same base class, reusing common functionality while providing different specializations.

## 3. Core Idea

### Class Declaration

```cpp
class FragTrap : public ClapTrap
{
public:
    void highFivesGuys();
};
```

### FragTrap Statistics

| Attribute     | ClapTrap | ScavTrap | FragTrap |
| ------------- | -------: | -------: | -------: |
| Hit points    |       10 |      100 |      100 |
| Energy points |       10 |       50 |      100 |
| Attack damage |        0 |       20 |       30 |

### Special Ability

```cpp
void FragTrap::highFivesGuys()
{
    // Display a positive high-five request.
}
```

This function introduces behavior specific to `FragTrap`.

### Inherited Behavior

Unless `FragTrap` provides its own implementation of a function, it can use the accessible inherited version.

For example, if `FragTrap` does not override `attack()`, its ordinary call to `attack()` uses the inherited `ClapTrap::attack()` implementation.

This differs from `ScavTrap`, which defines its own `attack()`.

## 4. Comparing ScavTrap and FragTrap

Both classes inherit from `ClapTrap`, but neither inherits from the other.

```text
          ClapTrap
          /      \
     ScavTrap   FragTrap
```

The hierarchy means:

- Both classes share the same base-class design.
- Each class has its own constructor and destructor.
- Each class can initialize the inherited statistics differently.
- Each class can introduce its own special abilities.
- `ScavTrap::attack()` and `ClapTrap::attack()` can have different implementations.

The comparison should focus on the actual class definitions and inherited behavior, not merely on the objects' names.

## 5. Mental Model

Think of `ScavTrap` and `FragTrap` as two different robot models built from the same blueprint.

They share a foundation but specialize it for different purposes.

## [https://github.com/RaneemAlhorany/c02](https://github.com/RaneemAlhorany/c02)6. Common Mistakes

- Assuming `FragTrap` inherits from `ScavTrap`.
- Assuming every inherited method must be reimplemented.
- Confusing a new function with an overridden function.
- Forgetting that each derived class has its own construction and destruction messages.
- Copying one derived class's statistics into another by mistake.

## 7. Previous Concepts Applied

**Previous Concept — Single Inheritance**

The same inheritance mechanism from `ScavTrap` is reused.

**Previous Concept — Method Overriding**

The difference between defining a new implementation and inheriting an existing one remains important.

**Previous Concept — Construction and Destruction Order**

Each derived object constructs its base portion first and destroys it last.

## 8. Key Takeaway

Sibling derived classes can share a common base class while implementing different statistics, abilities, and behavior.

---

# Concept 04 — Multiple Inheritance, the Diamond Problem, and Virtual Inheritance

**Exercise:** `ex03 — DiamondTrap`

## 1. Introduction

`DiamondTrap` inherits from both `ScavTrap` and `FragTrap`.

This creates a multiple-inheritance hierarchy in which both parent classes originate from `ClapTrap`.

The central challenge is managing the shared base class and selecting the correct inherited members.

## 2. Why It Matters

Multiple inheritance allows a class to combine functionality from more than one parent class.

However, when both parent classes inherit from the same base class, the final class can encounter duplicate base-class subobjects and ambiguous member access.

## 3. Core Idea

### The Diamond Hierarchy

```text
          ClapTrap
          /      \
     ScavTrap   FragTrap
          \      /
         DiamondTrap
```

Without virtual inheritance, a `DiamondTrap` can contain two separate `ClapTrap` subobjects: one through `ScavTrap` and one through `FragTrap`.

This is known as the **Diamond Problem**.

### Virtual Inheritance

Both intermediate classes must virtually inherit from `ClapTrap`:

```cpp
class ScavTrap : virtual public ClapTrap
{
    // ...
};

class FragTrap : virtual public ClapTrap
{
    // ...
};
```

Then the final class inherits from both:

```cpp
class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string _name;

public:
    void whoAmI();
};
```

Virtual inheritance ensures that the most-derived `DiamondTrap` object contains one shared `ClapTrap` subobject.

**Important:** `virtual` in this context solves the shared-base duplication problem. It is not the same concept as a virtual member function used for runtime polymorphism.

## 4. Initializing the Virtual Base

The most-derived class, `DiamondTrap`, is responsible for initializing the virtual base class.

```cpp
DiamondTrap::DiamondTrap(const std::string& name)
    : ClapTrap(name + "_clap_name"),
      ScavTrap(name),
      FragTrap(name),
      _name(name)
{
    // Select the required inherited statistics.
}
```

Even though `ScavTrap` and `FragTrap` have their own base-class initialization paths, the virtual `ClapTrap` subobject is initialized by `DiamondTrap`.

The constructor initialization list also establishes the initialization dependencies of the class hierarchy.

## 5. Combining the Required Attributes

`DiamondTrap` uses different inherited statistics from each parent class.

| Member        | Required Source |                   Value |
| ------------- | --------------- | ----------------------: |
| Hit points    | `FragTrap`      |                     100 |
| Energy points | `ScavTrap`      |                      50 |
| Attack damage | `FragTrap`      |                      30 |
| `attack()`    | `ScavTrap`      | ScavTrap implementation |

The derived constructor must establish the correct final state rather than assuming that multiple inheritance automatically selects the intended values.

## 6. Two Different Names

`DiamondTrap` has its own name, while its shared `ClapTrap` subobject has a separate name.

For example, creating `DiamondTrap("Diamond")` produces the conceptual names:

- `DiamondTrap` name: `"Diamond"`
- `ClapTrap` name: `"Diamond_clap_name"`

These names represent different state in different class subobjects.

The `whoAmI()` function must display both names.

This also demonstrates **name shadowing**: the derived class's private name member is distinct from the name member declared in `ClapTrap`.

## 7. Explicit Base-Class Method Selection

Multiple inheritance may make it necessary to specify which parent implementation should be used.

For example:

```cpp
ScavTrap::attack(target);
```

This explicitly selects `ScavTrap::attack()`.

The qualification removes ambiguity about which implementation is intended.

It is particularly useful when the derived class must use a specific parent's implementation rather than another inherited version.

## 8. Construction and Destruction Order

For a class using virtual inheritance:

- The virtual base is initialized first.
- Direct base classes are initialized in their declaration order.
- Members are initialized in their declaration order.
- The constructor body executes after initialization.

Destruction occurs in the reverse order of construction.

The most-derived constructor is responsible for virtual-base initialization, regardless of which intermediate class is initialized first.

## 9. Mental Model

Imagine two branches of a family tree sharing one ancestor.

Without virtual inheritance, the final class can contain two copies of that ancestor.

With virtual inheritance, both branches share one common ancestor subobject.

`DiamondTrap` then selects the required statistics and behavior from its two parent classes.

## 10. Common Mistakes

- Forgetting `virtual` in one of the intermediate inheritance declarations.
- Initializing the virtual base only through an intermediate class.
- Assuming both parent classes automatically contribute the correct statistics.
- Confusing `DiamondTrap`'s name with `ClapTrap`'s name.
- Ignoring ambiguity when accessing inherited members.
- Confusing virtual inheritance with virtual functions.
- Assuming the order of entries in a constructor initializer list overrides the class's declaration order for member initialization.

## 11. Previous Concepts Applied

**Previous Concept — Inheritance and Method Overriding**

The earlier inheritance hierarchy is combined into a multiple-inheritance hierarchy.

**Previous Concept — OCF and Copying**

The derived class must correctly implement copying and assignment where required, taking the inheritance structure into account.

**Previous Concept — Explicit Base-Class Method Selection**

Qualifying a method with its class name selects the intended inherited implementation.

**Previous Concept — Construction and Destruction Order**

The same lifecycle rules apply, with additional virtual-base initialization rules.

## 12. Key Takeaway

Multiple inheritance combines functionality from multiple parent classes. Virtual inheritance prevents duplicate shared-base subobjects, while explicit member selection and deliberate initialization ensure the final class behaves as required.

---

# Final Module Summary

| Exercise | Main Concept                     | Essential Understanding                                    |
| -------- | -------------------------------- | ---------------------------------------------------------- |
| ex00     | Base class                       | Define shared state and behavior                           |
| ex01     | Single inheritance               | Extend and customize a base class                          |
| ex02     | Derived-class specialization     | Compare sibling classes and inherited behavior             |
| ex03     | Multiple and virtual inheritance | Resolve the diamond hierarchy and select inherited members |

## Final Mental Model

```text
ClapTrap
   |
   +---- ScavTrap
   |         |
   |         +---- attack() customization
   |         +---- guardGate()
   |
   +---- FragTrap
   |         |
   |         +---- highFivesGuys()
   |
   +---- DiamondTrap
             |
             +---- Inherits ScavTrap and FragTrap
             +---- Shares one virtual ClapTrap base
             +---- Selects statistics from both parents
             +---- Maintains two distinct names
             +---- Implements whoAmI()
```

## Golden Idea

**Inheritance is not just about reusing code. It is about understanding what a class inherits, what it changes, how its base classes are initialized, and how ambiguity is resolved when multiple inheritance is involved.**

The four exercises build this understanding progressively, from a single base class to a hierarchy that combines multiple parent classes.

## Compilation and Testing

Compile according to the module's required C++ standard and flags:

```bash
c++ -Wall -Wextra -Werror -std=c++98 *.cpp -o program
```

Run the executable:

```bash
./program
```

Test each exercise independently in its own directory, using its corresponding source files and `Makefile`.

Verify:

- Default attribute values.
- Attack, damage, and repair behavior.
- Energy and hit-point restrictions.
- Constructor and destructor messages.
- Copy construction and assignment where required.
- Correct inherited method selection.
- Correct `DiamondTrap` names and combined statistics.
- No duplicate `ClapTrap` subobject in `DiamondTrap`.

**End of CPP Module 03 Notes**
