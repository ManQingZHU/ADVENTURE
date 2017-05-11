#ifndef Hero_hpp
#define Hero_hpp

#include "Character.h"

class Hero: public Character{
public:
    Hero(){}
    virtual ~Hero(){}
    void FoundPrincess(){WithPrincess = true;}
    void FoundMonster(){live = false;}
    bool WithPrin()const{return WithPrincess;}
    bool IsLive()const{return live;}
    void Reborn() {live = true; WithPrincess = false;}
private:
    bool WithPrincess;
    bool live;
};
#endif 
