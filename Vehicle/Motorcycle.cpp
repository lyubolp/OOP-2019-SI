#include "Motorcycle.h"

Motorcycle::Motorcycle()
{
    luggage_capacity = 0;
}

void Motorcycle::set_luggage_capacity(const int new_luggage_capacity)
{
    luggage_capacity = new_luggage_capacity;
}
    
const int Motorcycle::get_luggage_capacity() const 
{
    return luggage_capacity;
}
void Motorcycle::print() const
{
    Vehicle::print();
    std::cout << "Seats: " << luggage_capacity;
}