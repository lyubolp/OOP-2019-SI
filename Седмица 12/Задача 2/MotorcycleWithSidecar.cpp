//
// Created by lyubo on 07.05.19.
//

#include "MotorcycleWithSidecar.h"


MotorcycleWithSidecar::MotorcycleWithSidecar():wheels(3) {

}

void MotorcycleWithSidecar::set_wheels(const int &new_wheels) {
    wheels = new_wheels;
}
const int MotorcycleWithSidecar::get_wheels() const {
    return wheels;
}
