//
// Created by lyubo on 15.05.19.
//

#include "Milk.h"
Milk::Milk():ofMilk(cow)
{}
void Milk::set_type(const type& new_type)
{
    ofMilk = new_type;
}
const type Milk::get_type() const
{
    return ofMilk;
}