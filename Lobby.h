#ifndef Lobby_hpp
#define Lobby_hpp

#include <iostream>
#include "Room.h"


class Lobby:public Room{
public:
    Lobby(int id):Room(id){}
    void SetLobby(Room *re, Room *rw, Room *ru){SetRoom(nullptr, nullptr, re, rw, ru, nullptr);}
    virtual ~Lobby(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the lobby."<<std::endl; }
};
#endif
