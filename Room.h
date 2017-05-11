#ifndef Room_hpp
#define Room_hpp

#include <map>
#include <string>
#include "Character.h"
#include "Hero.h"

class Room{
public:
    Room(int x){id = x;}
    void SetRoom(Room *rn, Room *rs, Room *re, Room *rw, Room *ru, Room *rd);
    virtual ~Room() { }
    std::map<std::string, Room*> Exit() const {return exit;}
    int ID()const {return id;}
    virtual void Welcome(){}
    void PrintExits();
    Room* MoveToNext(std::istream& in);
private:
    int id;
    std::map<std::string, Room*> exit;
};



#endif 
