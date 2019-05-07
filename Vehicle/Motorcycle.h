#include "Vehicle.h"
#pragma once
class Motorcycle: public Vehicle
{
    private:
	    int luggage_capacity;
    public:
        Motorcycle();
        void set_luggage_capacity(const int new_luggage_capacity);
        const int get_luggage_capacity() const;
        void print() const;
};