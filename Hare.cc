#include "Hare.hpp"
#include <iostream>
#include <cstdlib>


Hare::Hare() 
{
    location = 1;
}

void Hare::move() 
{
    int chance = rand() % 100 + 1;

    if (chance <= 20) 
    {
        
    }

    else if (chance <= 40) 
    {        
        location += 9 ;
    }

    else if (chance <= 50) 
    {         
        location -= 12 ;
    }

    else if (chance <= 80) 
    {         
        location += 1  ;
    }

    else 
    {                           
        location -= 2 ;
    }

    showPosition();
}

void Hare::showPosition() 
{
    if (location < 1) location = 1 ;
    if (location > 70) location = 70 ;
}