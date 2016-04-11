#ifndef MAP_H 
#define MAP_H 
 
#include "Structures.h" 
#include "Monster.h" 
#include <string>
#include <vector>
 
class Map 
{ 
public: 
 
  // Constructor. 
 Map(); 
 
  // Methods 
  int  getPlayerXPos(); 
  int  getPlayerYPos(); 
  void movePlayer(); 
 std::vector<Monster> checkRandomEncounter(); 
  void printPlayerPos();
  int generateGold(Monster &monster);
  private: 
  // Data members. 
  int mPlayerXPos; 
  int mPlayerYPos; 
}; 
 
#endif //MAP_H 