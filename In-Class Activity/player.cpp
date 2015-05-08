#include "player.h"

/*
  OVERALL INSTRUCTIONS
  Look through this file. Each numbered task specifies
  code you need to add. Add the code in the order
  given.
*/

// Constructor - initializes a Player object
Player::Player(string nameToSet, int levelToSet)
{
  // (1) Set up the member variables of the current object

    name = nameToSet;
    level = levelToSet;

  // The line below sets this object's pet pointer to null
  this->pet = NULL;
  cout << name << " " << level << endl;
}

void Player::AddPet(string petName, int petLevel)
{
  // (2) Add a pat with the given name and level to
  //     this player.
  //     IF THE PLAYER ALREADY HAS A PET, ISSUE AND ERROR AND QUIT

if (this->pet = NULL)
    {
        cout << "\nError: Player already has a pet\n";
    }
else
    {

        pet = new Player(petName, petLevel);
    }

}
void Player::Describe()
{
  // (3) Print a description of the player, including her/his
  //     name and level. If the player has a pet, print
  //     the same information for the pet as well

}

Player::~Player()
{
  // (4) Implement this destructor. It needs to deallocate
  //     any memory that was dynamically allocated while
  //     the object was being used.

}

// TWO ADDITIONAL FUNCTIONS

// (5) Make both of the functions below "friend"s of the Player class

string WhoIsHigherLevel (Player * p1, Player * p2)
{
  // (6) Determine which of the two players has
  //     a higher level, and return that player's name
  //     (If it is a tie, return p1's name.)

}

string WhoHasAHigherLevelPet (Player * p1, Player * p2)
{
  // (6) Determine which of the two players' pets
  //     has a higher level, and return that player' name
  //     (If it is a tie, return p1's name.)
  //     (If only one player has a pet, return that player's name.)
  //     (If neither player has a pet, return and empy string.)
}

