//! Destruction Order
//! =================

//? When a Derived Class object is destroyed,
//? its Derived Class part is destroyed first,
//? then its Base Class part.

//! This is the opposite of Construction Order.

//! Construction:
//~ Base → Derived

//! Destruction:
//~ Derived → Base


//! Example:
// ClapTrap → ScavTrap

//! Construction:
// ClapTrap constructor
//     ↓
// ScavTrap constructor

//! Destruction:
// ScavTrap destructor
//     ↓
// ClapTrap destructor


//! Example:
// ScavTrap::~ScavTrap()
// {
//     std::cout << "ScavTrap destructor\n";
// }



// ClapTrap::~ClapTrap()
// {
//     std::cout << "ClapTrap destructor\n";
// }


//! When:
// {
//     ScavTrap scav("Dracula");
// }

//? Construction happens:
    //# ClapTrap → ScavTrap

//! When "scav" goes out of scope:

//? Destruction happens:
    //# ScavTrap → ClapTrap


//! The Derived Class destructor does NOT manually call
//! the Base Class destructor.

//* C++ automatically destroys the Base Class part
//* after the Derived Class destructor finishes.


//! IMPORTANT:

//! Construction:
//^ Base → Derived

//! Destruction:
//^ Derived → Base


//! Golden Idea:
//! "Build from Base to Derived,
//!  destroy from Derived to Base."