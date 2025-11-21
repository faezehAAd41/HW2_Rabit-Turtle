#ifndef RACE_HPP
#define RACE_HPP

#include "Tortoise.hpp"
#include "Hare.hpp"

#include <iostream>

class Race 
{
    public:

        Race();
        void start();

    private:

        Tortoise tortoise;
        Hare hare;
        static const int TrackLenght = 70;

        void printTrack();
        void Winner(int t_loc, int h_loc);
};

#endif