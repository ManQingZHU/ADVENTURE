#include "Character.h"
#include <ctime>
#include <cstdlib>

void InitLoc(Character& prin, Character& mon)
{
    int a , b;
    srand((unsigned)time(NULL));
    a = rand() % 9 ;
    b = rand() % 9;
    while(a == b)
    {
        b = rand() % 9;
    }
    
    prin.SetLoc(a);
    mon.SetLoc(b);
    
}
