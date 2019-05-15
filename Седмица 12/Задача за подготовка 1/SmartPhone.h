//
// Created by lyubo on 14.05.19.
//

#ifndef CLIONWORKDIR_SMARTPHONE_H
#define CLIONWORKDIR_SMARTPHONE_H


#include "SmartDevice.h"
#include "Phone.h"

class SmartPhone: public SmartDevice, public Phone {
private:
    int cameraResolution;
public:
    SmartPhone();

    void set_camera(const int&);
    void print() const;
    const int get_camera() const;
};


#endif //CLIONWORKDIR_SMARTPHONE_H
