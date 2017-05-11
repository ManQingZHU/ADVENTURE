#ifndef DiningRoom_h
#define DiningRoom_h

#include <iostream>
#include "Room.h"


class DiningRoom:public Room{
public:
    DiningRoom(int id):Room(id){}
    void SetDiningRoom(Room *rn, Room *rw, Room *rd){SetRoom(rn, nullptr, nullptr, rw, nullptr,rd);}
    virtual ~DiningRoom(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the Dining Room."<<std::endl; }
};

#endif /* DiningRoom_h */
