#ifndef Kitchen_h
#define Kitchen_h

#include <iostream>
#include "Room.h"


class Kitchen:public Room{
public:
    Kitchen(int id):Room(id){}
    void SetKitchen(Room *rw, Room *rd){SetRoom(nullptr, nullptr, nullptr, rw, nullptr,rd);}
    virtual ~Kitchen(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the Kitchen."<<std::endl; }
};

#endif /* Kitchen_h */
