#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal 
{
    public:

        virtual ~Animal() = default ;
        virtual void move() = 0 ;
        
        int getPosition() const { return location ; }
        void setPosition(int l) { location = l ; }

    protected:

        int location = 1;
};

#endif