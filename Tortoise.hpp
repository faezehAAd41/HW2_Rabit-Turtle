#ifndef TORTOISE_HPP
#define TORTOISE_HPP

#include "Animal.hpp"

class Tortoise : public Animal 
{
    public:

        Tortoise();
        void move() override;

    private:

        void showPosition();
    };

#endif