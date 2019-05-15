//
// Created by lyubo on 15.05.19.
//

#include "Coffee.h"

Coffee::Coffee():ofCoffee (Arabic){}
void Coffee::set_origin(const origin& new_origin)
{
    ofCoffee = new_origin;
}
const origin Coffee::get_origin() const
{
    return ofCoffee;
}