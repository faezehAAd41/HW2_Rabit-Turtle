#ifndef HARE_HPP
#define HARE_HPP

#include "Animal.hpp"
#include <iostream>

class Hare : public Animal 
{
    public:

        Hare();
        void move() override;

    private:

        void showPosition();
};

#endif