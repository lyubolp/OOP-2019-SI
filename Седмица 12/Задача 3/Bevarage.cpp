//
// Created by lyubo on 15.05.19.
//

#include "Bevarage.h"
Bevarage::Bevarage():code(0), amount(0)
{

}

void Bevarage::set_code(const int& new_code)
{
    code = new_code;
}
void Bevarage::set_amount(const double& new_amount)
{
    amount = new_amount;
}

const int Bevarage::get_code() const
{
    return code;
}
const double Bevarage::get_amount() const
{
    return amount;
}