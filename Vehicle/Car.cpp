#include "Car.h"
#include <iostream>
Car::Car():seats(0)
{
    std::cout << "Default constructor called";
    fuel_type = new char[1];
    fuel_type[0] = '\0';
}
Car::Car(const Car &object_to_copy_from): Vehicle(object_to_copy_from)
{
    seats = object_to_copy_from.seats;

    fuel_type = new char[strlen(object_to_copy_from.fuel_type) + 1];
    strcpy(fuel_type, object_to_copy_from.fuel_type);
}

Car& Car::operator=(const Car &object_to_copy_from){
    if(this != &object_to_copy_from )
    {
        std::cout << "Operator= called";
        seats = object_to_copy_from.seats;

        delete[] fuel_type;
        fuel_type = new char[strlen(object_to_copy_from.fuel_type) + 1];

        strcpy(fuel_type, object_to_copy_from.fuel_type);

        //Vehicle::operator=(object_to_copy_from);

    }
    return *this;
}
void Car::set_fuel_type(const char *new_fuel_type) {
    delete[] fuel_type;
    fuel_type = new char[strlen(new_fuel_type) + 1];

    strcpy(fuel_type, new_fuel_type);

}
void Car::set_seat(const int new_seats)
{
    seats = new_seats;
}

void Car::print() const
{
    Vehicle::print();
    std::cout << "Seats: " << seats << std::endl;
    std::cout << "Fuel type: " << fuel_type;
}
const int Car::get_seats() const 
{
    return seats;
}