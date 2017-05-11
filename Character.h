#ifndef Character_hpp
#define Character_hpp

class Character{       //princess, monster
public:
    Character(){}
    virtual ~Character(){}
    void SetLoc(int x){ loc = x; }
    int Location()const{ return loc; }
protected:
    int loc;
};

void InitLoc(Character& prin, Character& mon);

#endif 
