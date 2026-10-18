//! Constructor Chaining / Construction Order
//! ==========================================

//? When a Derived Class inherits from a Base Class,
//? constructing a Derived object also requires
//? constructing its Base Class part first.

//! Example:
// ClapTrap → ScavTrap

// ScavTrap object
//     ├── ClapTrap part
//     └── ScavTrap part


//! Construction Order:
//? Base Class
//?     ↓
//? Derived Class



//! In our project:
//~ ClapTrap constructor
//~     ↓
//~ ScavTrap constructor


//! Example:
// ScavTrap::ScavTrap(const std::string& name)
//     : ClapTrap(name)
// {
//     std::cout << "ScavTrap constructor\n";
// }

//! When we create:
// ScavTrap scav("Dracula");

//! C++ first initializes the Base Class:
// ClapTrap(name)

//! Then it executes the Derived Class constructor body:
// ScavTrap constructor body


//? This is called Constructor Chaining:
//~ The construction process follows the inheritance hierarchy.

//! Example with multiple levels:
//
// A
// ↓
// B
// ↓
// C
//

//! Creating C gives:
//
// A constructor
//     ↓
// B constructor
//     ↓
// C constructor


//! IMPORTANT:
//^ The Base Class must exist before
//^ the Derived Class part can be constructed.


//! Construction Order:
//# Base → Derived


//! This is different from function calls.
//? Constructor order is determined by the inheritance hierarchy.

//! Golden Idea:
//* "Build the Base first, then build the Derived."




