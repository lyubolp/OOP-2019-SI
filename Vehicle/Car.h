#include "Vehicle.h"
#include <iostream>
#pragma once
class Car: public Vehicle
{
    private:
	    int seats;

    public:
    Car();
    void set_seat(const int new_seats);
    void print() const;
    const int get_seats() const;
    
};