#pragma once
#include <iostream>
#include <cstring>
class Vehicle
{
    protected:
        char* maker;
        char* model;

        int horsepower;
        void copy_char_string(char* destination, const char* source) const;
        void replace_char_string(char* destination, const char* source) const;
    public:
        Vehicle();
        Vehicle(const char*, const char*, int);
        Vehicle(const Vehicle& object_to_copy_from);
        Vehicle& operator=(const Vehicle& object_to_copy_from);
        void set_maker(const char* new_maker);
        void set_model(const char* new_model);
        void set_horsepower(const int new_horsepower);
        void print() const;
        ~Vehicle();
};