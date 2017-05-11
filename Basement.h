#ifndef Basement_hpp
#define Basement_hpp

#include <iostream>
#include "Room.h"

class Basement:public Room{
public:
    Basement(int id):Room(id){}
    void SetBasement(Room *ru){SetRoom(nullptr, nullptr, nullptr, nullptr, ru, nullptr);}
    virtual ~Basement(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the basement."<<std::endl; }
};
#endif 
