#include <iostream>
#include "Scooter.h"

Scooter::Scooter()
{
    max_capacity_driver = 1;
    Vehicle::set_horsepower(30);
}
void Scooter::set_max_capacity(const int new_capacity)
{
    max_capacity_driver = new_capacity;
}
const int Scooter::get_max_capacity_driver() const
{
    return max_capacity_driver;
}
void Scooter::print() const
{
    Vehicle::print();
    std::cout << max_capacity_driver << std::endl;
}