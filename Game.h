#ifndef Game_h
#define Game_h

#include "Room.h"
#include "Character.h"

int Beginning();
void State(const Room* r, const Character& p, const Character& m, Hero& h);
Room* Command(Room* r);
void HappyEnding();

#endif /* Game_h */
