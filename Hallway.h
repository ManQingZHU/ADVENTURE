#ifndef Hallway_h
#define Hallway_h

class Hallway:public Room{
public:
    Hallway(int id):Room(id){}
    void SetHallway(Room *rn, Room *re){SetRoom(rn, nullptr, re,nullptr, nullptr, nullptr);}
    virtual ~Hallway(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the Hallway."<<std::endl; }
};


#endif /* Hallway_h */
