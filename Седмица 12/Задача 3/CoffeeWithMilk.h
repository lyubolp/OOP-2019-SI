//
// Created by lyubo on 15.05.19.
//

#ifndef CLIONWORKDIR_COFFEEWITHMILK_H
#define CLIONWORKDIR_COFFEEWITHMILK_H


#include "Coffee.h"
#include "Milk.h"

class CoffeeWithMilk: public Coffee, public Milk {
private:
    double price;
public:
    CoffeeWithMilk();
    void set_price(const double&);
    const double get_price() const;
};


#endif //CLIONWORKDIR_COFFEEWITHMILK_H
