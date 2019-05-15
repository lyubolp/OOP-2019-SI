//
// Created by lyubo on 07.05.19.
//

#ifndef CLIONWORKDIR_MOTORCYCLEWITHSIDECAR_H
#define CLIONWORKDIR_MOTORCYCLEWITHSIDECAR_H


#include "Car.h"
#include "Motorcycle.h"

class MotorcycleWithSidecar: public Car, public Motorcycle {
private:
    int wheels;
public:
    MotorcycleWithSidecar();

    void set_wheels(const int&);
    const int get_wheels() const;
};


#endif //CLIONWORKDIR_MOTORCYCLEWITHSIDECAR_H
