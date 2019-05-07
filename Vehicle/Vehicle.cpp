#include "Vehicle.h"
Vehicle::Vehicle()
{
    std::cout << "Default called";
    maker = new char[1];
    maker[0] = '\0';

    model = new char[1];
    model[0] = '\0';

    horsepower = 0;
}

Vehicle::Vehicle(const char* new_maker, const char* new_model, const int new_horsepower)
{
    copy_char_string(maker, new_maker);
    copy_char_string(model, new_model);

    horsepower = new_horsepower;
}
Vehicle::Vehicle(const Vehicle& object_to_copy_from)
{
    copy_char_string(maker, object_to_copy_from.maker);
    copy_char_string(model, object_to_copy_from.model);

    horsepower = object_to_copy_from.horsepower;
            
}

Vehicle& Vehicle::operator=(const Vehicle& object_to_copy_from)
{
    if(this != &object_to_copy_from)
    {
        replace_char_string(maker, object_to_copy_from.maker);
        replace_char_string(model, object_to_copy_from.model);

        horsepower = object_to_copy_from.horsepower;
    }
    return *this;
}
void Vehicle::copy_char_string(char* destination, const char* source) const
{
    destination = new char[strlen(source) + 1];
    strcpy(destination, source);
}
void Vehicle::replace_char_string(char* destination, const char* source) const
{
    delete[] destination;
    copy_char_string(destination, source);
}
void Vehicle::set_maker(const char* new_maker)
{
    replace_char_string(maker, new_maker);
}
void Vehicle::set_model(const char* new_model)
{
    replace_char_string(model, new_model);
}
void Vehicle::set_horsepower(const int new_horsepower)
{
    horsepower = new_horsepower;
}
void Vehicle::print() const
{
    std::cout << maker << "/" << model << " " << horsepower << "hp" << std::endl;
}
Vehicle::~Vehicle()
{
    delete[] maker;
    delete[] model;
}    