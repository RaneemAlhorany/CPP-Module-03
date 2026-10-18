//! Testing / Comparing ScavTrap & FragTrap :

/*
$ Testing is used to verify that each Derived Class
  preserves the shared Base behavior while correctly
  implementing its own specialized characteristics
  and behavior.

# Structure :

                 ClapTrap
                /         \
               ↓           ↓
          ScavTrap       FragTrap
               │             │
          guardGate()   highFivesGuys()

$ Both Derived Classes share the Base Class,
  but each one has its own specialization.

# Shared Behavior :

    FragTrap frag("FR4G-TP");

    frag.attack("Bandit");
    frag.takeDamage(40);
    frag.beRepaired(20);

$ These tests verify that FragTrap can use the
  behavior provided by ClapTrap.

# Specialized Behavior :

    ScavTrap
        ↓
    guardGate()

    FragTrap
        ↓
    highFivesGuys()

$ Each Derived Class has its own specialized
  capability.

# Different Characteristics :

    ScavTrap :

        hitPoints     = 100
        energyPoints  = 50
        attackDamage  = 20

    FragTrap :

        hitPoints     = 100
        energyPoints  = 100
        attackDamage  = 30

$ Tests can verify that each Derived Class uses
  its own characteristics.

# Energy Test :

    for (int i = 0; i < 100; i++)
        frag.attack("Enemy");

    frag.attack("Enemy");

$ This verifies that FragTrap's energy is consumed
  by attacks and that an attack is rejected when
  the energy reaches zero.

# Death Test :

    frag.takeDamage(200);

    frag.attack("Enemy");
    frag.beRepaired(10);
    frag.highFivesGuys();

$ After taking enough damage:

    hitPoints == 0

$ The object is dead, so its actions that require
  an active state are rejected.

# What Testing Verifies :

    Multiple Derived Classes
            ↓
    Shared Base behavior
            ↓
    Different characteristics
            ↓
    Specialized behavior
            ↓
    State-dependent behavior

# Testing Mental Model :

        Concept
           ↓
    Implementation
           ↓
          Test
           ↓
    Observe Behavior
           ↓
    Confirm Concept

! Testing is not only checking whether the program
  runs.

$ It is used to verify that the implementation
  actually behaves according to the concepts
  and requirements.

! Golden Idea :

  Shared Base
       +
  Derived Specialization
       +
  State Changes
       ↓
  Test each behavior
       ↓
  Verify the complete design



! Golden Idea
    Testing is used to verify that each Derived Class preserves the shared 
    Base behavior while correctly implementing its own specialized characteristics 
    and behavior.

*/



