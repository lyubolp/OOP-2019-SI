//
// Created by lyubo on 15.05.19.
//

#ifndef CLIONWORKDIR_COFFEE_H
#define CLIONWORKDIR_COFFEE_H

#include "Bevarage.h"

enum origin
{
    Arabic,
    Brazillian,
    Indian,
    Collumbian
};
class Coffee: virtual public Bevarage {
private:
    origin ofCoffee;

public:
    Coffee();
    void set_origin(const origin&);
    const origin get_origin() const;
};


#endif //CLIONWORKDIR_COFFEE_H
