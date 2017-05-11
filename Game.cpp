#include <iostream>
#include <string>
#include <map>

#include "Game.h"

using namespace std;

int Beginning()
{
    int flag;
    const string title = "ADVENTURE";
    const string subtitle = "save the princess form the dangerous castle";
    const string option1 = "0. exit";
    const string option2 = "1. start";
    const string explanation = " Enter 0 if you want to quit. Enter 1 if you want to start. ";
    const string space(explanation.size(), ' ');
    const string frame1 = "* "+space+ " *";
    const string frame2(frame1.size(),'*');
    const string spa1((frame2.size()-title.size())/2 - 1, ' ');
    const string spa2((frame2.size()-subtitle.size())/2 - 1, ' ');
    const string spa3((frame2.size()-option1.size())/2 - 1, ' ');
    const string spa4((frame2.size()-option2.size())/2 - 1, ' ');
    
    cout << frame2 << endl;
    cout << frame1 << endl;
    cout << "*" << spa1 << title << spa1 << " *"<<endl;
    cout << frame1 << endl;
    cout << "*" << spa2 << subtitle << spa2 << " *"<<endl;
    cout << frame1 << endl;
    cout << frame1 << endl;
    cout << "*" << spa3 << option1 << spa3 << " *"<<endl;
    cout << "*" << spa4 << option2 << spa4 << "*"<<endl;
    cout << frame1 << endl;
    cout << "* "<<explanation<<" *" << endl;
    cout << frame2 << endl;
    cin >> flag;
    return flag;
}

void State(const Room* r, const Character& p, const Character& m, Hero& h)
{
    if(p.Location() == r->ID())
    {    if(!h.WithPrin())
        {
            cout << "Congratulation! You have already found the princess."<<endl;
            h.FoundPrincess();
        }
    }
    else if(m.Location() == r->ID())
    {
        cout << "Oh, no! It's the scary monster!"<<endl;
        cout << "You DIE."<<endl;
        h.FoundMonster();
    }
    else cout<< "There is nothing special. At least, you are safe now." <<endl;
}

Room* Command(Room* r)
{
    string go;
    Room* next = nullptr;
    cout << "Enter your command: ";
    do{
        cin >> go;
        if(go == "go")
        {
            next = r->MoveToNext(cin);
        }
        if(next == nullptr)
            cout << "\nInvalid command, input again please."<<endl;
        else break;
        
    }while (1);
    
    return next;
}

void HappyEnding()
{
    cout << "You successfully save the princess."<< endl;
}



