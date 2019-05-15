//
// Created by lyubo on 14.05.19.
//

#ifndef CLIONWORKDIR_SMARTDEVICE_H
#define CLIONWORKDIR_SMARTDEVICE_H

static int amount = 0;
class SmartDevice {
private:
    int product_number;
    int cores;
    int RAM;
    double speed;
public:
    SmartDevice();

    void set_product_number(const int&);
    void set_cores(const int&);
    void set_RAM(const int&);
    void set_speed(const double&);

    void print() const;

    const int get_product_number() const;
    const int get_cores() const;
    const int get_RAM() const;
    const double get_speed() const;
};


#endif //CLIONWORKDIR_SMARTDEVICE_H
