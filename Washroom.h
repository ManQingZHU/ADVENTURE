#ifndef Washroom_h
#define Washroom_h

class Washroom:public Room{
public:
    Washroom(int id):Room(id){}
    void SetWashroom(Room *re){SetRoom(nullptr, nullptr, re,nullptr, nullptr, nullptr);}
    virtual ~Washroom(){}
    virtual void Welcome(){ std::cout << "\nWelcome to the Washroom."<<std::endl; }
};

#endif /* Washroom_h */
