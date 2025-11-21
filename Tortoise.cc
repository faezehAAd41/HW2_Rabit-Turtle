#include "Tortoise.hpp"
#include <iostream>

using namespace std;


Tortoise::Tortoise() 
{
    location = 1;
}

void Tortoise::move() 
{
    int chance = rand() % 100 + 1;

    if (chance <= 50) 
    {          
        location += 3;
    }

    else if (chance <= 70) 
    {     
        location += 1;
    }

    else 
    {                        
        location -= 6;
    }

    showPosition();
}

void Tortoise::showPosition() 
{
    if (location < 1) location = 1;
    if (location > 70) location = 70;
}