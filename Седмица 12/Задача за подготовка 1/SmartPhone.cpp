//
// Created by lyubo on 14.05.19.
//

#include <iostream>
#include "SmartPhone.h"

SmartPhone::SmartPhone() : cameraResolution(0)
{

}

void SmartPhone::set_camera(const int& new_camera)
{
    cameraResolution = new_camera;
}
void SmartPhone::print() const
{
    Phone::print();
    SmartDevice::print();
    std::cout << "Camera: " << cameraResolution << "\n";
}
const int SmartPhone::get_camera() const
{
    return cameraResolution;
}