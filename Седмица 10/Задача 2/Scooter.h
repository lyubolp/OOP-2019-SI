#include "Motorcycle.h"
#pragma once
class Scooter:public Motorcycle
{
    private:
        int max_capacity_driver;
    public:
        Scooter();
        void set_max_capacity(const int);
        const int get_max_capacity_driver() const;
        void print() const;
};