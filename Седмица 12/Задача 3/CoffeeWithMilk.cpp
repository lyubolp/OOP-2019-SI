//
// Created by lyubo on 15.05.19.
//

#include "CoffeeWithMilk.h"

CoffeeWithMilk::CoffeeWithMilk() : price(1.25)
{

}
void CoffeeWithMilk::set_price(const double& new_price)
{
    price = new_price;
}
const double CoffeeWithMilk::get_price() const
{
    return price;
}