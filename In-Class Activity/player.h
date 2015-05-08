#ifndef Player_h
#define Player_h

#include <iostream>
using namespace std;

/*
  DO NOT ALTER THIS CODE, EXCEPT FOR TASK (5).
*/

class Player
{
 private:
  string name;
  int level;
  Player * pet;
 public:
  Player(string nameToSet, int levelToSet);
  void AddPet(string petLevel, int petName);
  void Describe();
  ~Player();
};

#endif
