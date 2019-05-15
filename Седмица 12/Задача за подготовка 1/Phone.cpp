//
// Created by lyubo on 14.05.19.
//

#include <cstring>
#include <iostream>
#include "Phone.h"

Phone::Phone(): screen(5), number(1234567890)
{
    name = new char[0]; //name = nullptr;
    name[0] = '\0';
}
Phone::Phone(const Phone& object_to_copy_from):screen(object_to_copy_from.screen), number(object_to_copy_from.number)
{
    int size = strlen(object_to_copy_from.name) + 1;
    name = new char[size];
    strcpy(name, object_to_copy_from.name);
}
Phone& Phone::operator=(const Phone& object_to_copy_from)
{
    if(this != &object_to_copy_from)
    {
        delete[] name;
        screen = object_to_copy_from.screen;
        number = object_to_copy_from.number;

        int size = strlen(object_to_copy_from.name) + 1;
        name = new char[size];
        strcpy(name, object_to_copy_from.name);

    }
    return *this;
}
Phone::~Phone()
{
    delete[] name;
}

void Phone::set_name(const char* new_name)
{
    delete[] name;

    int size = strlen(new_name) + 1;
    name = new char[size];
    strcpy(name, new_name);

}
void Phone::set_screen(const double& new_screen)
{
    screen = new_screen;
}
void Phone::set_number(const int& new_number)
{
    number = new_number;
}

void Phone::call(const Phone& phone_to_call) const
{
    std::cout <<"You should call this number: " << phone_to_call.get_number();
}
void Phone::print() const
{
    std::cout << "Phone print called \nName: " << name <<
                "\nScreen:" << screen <<
                "\nNumber: " << number;
}

const char* Phone::get_name() const
{
    return name;
}
const double Phone::get_screen() const
{
    return screen;
}
const int Phone::get_number() const
{
    return number;
}