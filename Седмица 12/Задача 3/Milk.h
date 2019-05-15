//
// Created by lyubo on 15.05.19.
//

#ifndef CLIONWORKDIR_MILK_H
#define CLIONWORKDIR_MILK_H

#include "Bevarage.h"

enum type
{
    cow,
    almond,
    bull
};

class Milk: virtual public Bevarage {
private:
    type ofMilk;
public:
    Milk();

    void set_type(const type&);
    const type get_type() const;
};


#endif //CLIONWORKDIR_MILK_H
