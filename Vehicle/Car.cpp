#include "Car.h"

Car::Car()
{
    seats = 0;
}

void Car::set_seat(const int new_seats)
{
    seats = new_seats;
}
    
void Car::print() const
{
    Vehicle::print();
    std::cout << "Seats: " << seats;
}
const int Car::get_seats() const 
{
    return seats;
}