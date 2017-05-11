#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "Room.h"
#include "Character.h"
#include "Hero.h"
using namespace std;

void Room::SetRoom(Room *rn, Room *rs, Room *re, Room *rw, Room *ru, Room *rd)
{
        exit["North"] = rn;
        exit["South"] = rs;
        exit["East"] = re;
        exit["West"] = rw;
        exit["Up"] = ru;
        exit["Down"] = rd;
}

void Room::PrintExits()
{
    vector<string> exits;
    map<string, Room*>::iterator iter;
    for(iter = exit.begin(); iter!= exit.end(); ++iter)
    {
        if(iter->second == nullptr)
            continue;
        exits.push_back(iter->first);
    }
    
    cout << "There are "<<exits.size()<< " exits: ";
    vector<string>::iterator it = exits.begin();
    for(; it != exits.end(); ++it )
    {
        cout << *it << " ";
    }
    cout<< endl;
}

Room* Room::MoveToNext(istream& in)
{
    string direc;
    in >> direc;
    return exit[direc];
}
