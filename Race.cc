#include "Race.hpp"

#include <iostream>
#include <windows.h>

using namespace std;

Race::Race() 
{
    tortoise.setPosition (1);
    hare.setPosition (1);
}

void Race::start() 
{
    cout << "BANG !!!!! \n";
    cout << "AND THEY'RE OFF !!!!!\n\n";
    
    printTrack();

    while (true) 
    {
        Sleep(300);
        system("cls");

        tortoise.move();
        hare.move();

        printTrack();

        int t_loc = tortoise.getPosition() ;
        int h_loc = hare.getPosition() ;

        if (t_loc >= 70 || h_loc >= 70) 
        {
           Winner(t_loc, h_loc) ;
            
           break;
        }
    }
}

void Race::printTrack() 
{
    int t_loc = tortoise.getPosition();
    int h_loc = hare.getPosition();

    for (int i = 1 ; i <= TrackLenght ; i++) 
    {
        if (t_loc == h_loc && t_loc == i) 
        {
            cout << "OUCH!!!" ;
            i += 7 ;
        }

        else if (t_loc == i) 
        {
            cout << "T" ;
        }


        else if (h_loc == i) 
        {
            cout << "H" ;
        }


        else 
        {
            cout << "-" ;
        }
    }
    cout << endl << endl ;;
}

void Race::Winner(int t_loc, int h_loc) 
{
    if (t_loc >= 70 && h_loc >= 70) 
    {
        cout << "IT'S A TIE!!!\n";
    }

    else if (t_loc >= 70) 
    {
        cout << "TORTOISE WINS!!! YAY!!!\n" ;
    }


    else 
    {
        cout << "HARE WINS!!! BOO!!!\n" ;
    }
}