#include "Race.hpp"

#include <iostream>
#include <ctime>

using namespace std;

int main() 
{
   srand(time(NULL));

    cout << "\t\t TORTOISE vs HARE\n";
    cout << "\t\t\tTrack: 70 squares\n";
   

    Race race;
    race.start();

    cout << "\n\nRace finished! Press Enter to exit...";
    cin.get();


    return 0;
}