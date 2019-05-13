#include "Vehicle.h"
#include "Property.h"
#include <iostream>
#pragma once
class Car: virtual public Vehicle, public Property
{
    private:
        int seats;
	    char* fuel_type;

    public:
        Car();
        Car(const Car&);
        Car&operator=(const Car&);
        void set_seat(const int);
        void set_fuel_type(const char*);
        void print() const;
        const int get_seats() const;
};