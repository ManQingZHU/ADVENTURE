#include <iostream>
#include "Room.h"
#include "Lobby.h"
#include "Basement.h"
#include "Hallway.h"
#include "LivingRoom.h"
#include "Kitchen.h"
#include "Library.h"
#include "Bedroom.h"
#include "DiningRoom.h"
#include "Washroom.h"

#include "Character.h"
#include "Hero.h"

#include "Game.h"
using namespace std;

int main()
{
    Lobby lob(0);
    Basement bas1(1);
    Basement bas2(2);
    Hallway hal(3);
    LivingRoom liv(4);
    Kitchen kit(5);
    Library lib(6);
    Bedroom bed(7);
    DiningRoom din(8);
    Washroom was(9);
    
    lob.SetLobby(&kit, &hal, &din);
    bas1.SetBasement(&lib);
    bas2.SetBasement(&kit);
    hal.SetHallway(&liv, &lob);
    liv.SetLivingRoom(&hal, &lib);
    kit.SetKitchen(&lob, &bas2);
    lib.SetLibrary(&liv, &bed, &bas1);
    bed.SetBedroom(&din, &lib);
    din.SetDiningRoom(&bed, &was, &lob);
    was.SetWashroom(&din);
    
    Character princess, monster;
    Hero hero;  
    Room* where;
    
    int flag;   // flag for the game to quit
    //game start
    flag = Beginning();
    
    while(flag)
    {
        InitLoc(princess, monster);
        hero.Reborn();
        where = &lob;
        
        while (hero.IsLive()) {
            where->Welcome();
            if(where != &lob)
                State(where, princess, monster, hero);
            
            if (!hero.IsLive())
                break;
            
            if(where == &lob && hero.WithPrin())
            {
                HappyEnding();
                break;
            }
            
            where->PrintExits();
            where = Command(where);
        }
        cout << endl;
        flag = Beginning(); // return to the beginning
    }
    
    
    
    return 0;
}
