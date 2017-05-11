#ifndef LivingRoom_h
#define LivingRoom_h

class LivingRoom:public Room{
public:
    LivingRoom(int id):Room(id){}
    void SetLivingRoom(Room *rs, Room *re){SetRoom(nullptr, rs, re,nullptr, nullptr, nullptr);}
    virtual ~LivingRoom(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the Living Room."<<std::endl; }
};

#endif /* LivingRoom_h */
