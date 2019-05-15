//
// Created by lyubo on 14.05.19.
//

#include <iostream>
#include "SmartDevice.h"

SmartDevice::SmartDevice() : product_number(amount+1), cores(1), RAM(1), speed(1)
{
    amount++;
}

void SmartDevice::set_product_number(const int& new_product_number)
{
    product_number = new_product_number;
}
void SmartDevice::set_cores(const int& new_cores)
{
    cores = new_cores;
}
void SmartDevice::set_RAM(const int& new_RAM)
{
    RAM = new_RAM;
}
void SmartDevice::set_speed(const double& new_speed)
{
    speed = new_speed;
}

void SmartDevice::print() const
{
    std::cout << "Product number: " << product_number <<
                "\nCores:" << cores <<
                "\nRAM:" << RAM <<
                "\nSpeed:" << speed << "\n";
}

const int SmartDevice::get_product_number() const
{
    return product_number;
}
const int SmartDevice::get_cores() const
{
    return cores;
}
const int SmartDevice::get_RAM() const
{
    return RAM;
}

const double SmartDevice::get_speed() const
{
    return speed;
}