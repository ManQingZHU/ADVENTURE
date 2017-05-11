#ifndef Bedroom_h
#define Bedroom_h

class Bedroom:public Room{
public:
    Bedroom(int id):Room(id){}
    void SetBedroom(Room *rs, Room *rd){SetRoom(nullptr, rs, nullptr,nullptr, nullptr, rd);}
    virtual ~Bedroom(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the Bedroom."<<std::endl; }
};

#endif /* Bedroom_h */
