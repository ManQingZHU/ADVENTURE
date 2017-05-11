#ifndef Library_h
#define Library_h

#include <iostream>
#include "Room.h"


class Library:public Room{
public:
    Library(int id):Room(id){}
    void SetLibrary(Room *rw, Room* ru, Room *rd){SetRoom(nullptr, nullptr, nullptr, rw, ru,rd);}
    virtual ~Library(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the Library."<<std::endl; }
};

#endif /* Library_h */
