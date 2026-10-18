//! Base Class Initialization in a Derived Constructor
//! ==================================================

//? When a Derived Class inherits from a Base Class,
//? the Derived object contains a Base Class part.

//! Example:
// ScavTrap inherits from ClapTrap

//~ ScavTrap object
//~     ├── ClapTrap part
//~     └── ScavTrap part


//! To initialize the Base Class part,
//! we use the Member Initializer List:

// ScavTrap::ScavTrap(const std::string& name)
//     : ClapTrap(name)
// {
// }


//! : ClapTrap(name) means:
//# Call the ClapTrap constructor with "name"
//# to initialize the Base Class part.


//$ The Base Class must be initialized BEFORE
//$ the body of the Derived Class constructor starts.


//! Example:
//
// ScavTrap::ScavTrap(const std::string& name)
//     : ClapTrap(name)
// {
//     std::cout << "ScavTrap constructor called\n";
// }


//! Construction concept:
//
// Create ScavTrap
//       ↓
// Initialize ClapTrap part
//       ↓
// ClapTrap(name)
//       ↓
// Execute ScavTrap constructor body


//! The Base Class is NOT initialized by writing:
//
// ClapTrap(name);
//
//! inside the constructor body.

//~ The correct way to initialize the Base Class
//~ is through the Member Initializer List:
//
//! : ClapTrap(name)


//! Why do we use it?
//? Because we want to pass the name to the Base Class
//? constructor and properly initialize the inherited part.

//! If we do not explicitly initialize the Base Class,
//! C++ will try to use its default constructor,
//! if one is available.


//! IMPORTANT:
//% Base Class Initialization happens before
//% the Derived Class constructor body.

//! Golden Idea:
// "Initialize the Base Class part first,
//  then construct the Derived Class part."


