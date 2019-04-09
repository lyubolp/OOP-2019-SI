#include "Account.h"
#include <iostream>
#include <cstring>

Account::Account()
{
    name = new char[1];
    name[0] = '\0';

    IBAN = new char[1];
    IBAN[0] = '\0';

    balance = 0;
}

Account::Account(const char* new_name, const char* new_IBAN)
{
    balance = 0;

    int size_of_string = strlen(new_name);

    name = new char[size_of_string + 1];
    strcpy(name, new_name);

    size_of_string = strlen(new_IBAN);

    IBAN = new char[size_of_string + 1];
    strcpy(IBAN, new_IBAN);
}
Account::Account(const Account& object_to_copy_from)
{
    balance = object_to_copy_from.balance;

    int size_of_string = strlen(object_to_copy_from.name);

    name = new char[size_of_string + 1];
    strcpy(name, object_to_copy_from.name);

    size_of_string = strlen(object_to_copy_from.IBAN);

    IBAN = new char[size_of_string + 1];
    strcpy(IBAN, object_to_copy_from.IBAN);
}
Account& Account::operator=(const Account& object_to_copy_from)
{
    if(this != &object_to_copy_from)
    {
        delete[] name;
        delete[] IBAN;

        balance = object_to_copy_from.balance;

        int size_of_string = strlen(object_to_copy_from.name);

        name = new char[size_of_string + 1];
        strcpy(name, object_to_copy_from.name);

        size_of_string = strlen(object_to_copy_from.IBAN);

        IBAN = new char[size_of_string + 1];
        strcpy(IBAN, object_to_copy_from.IBAN);
    }
    return *this;
}
void Account::change_amount(double new_amount)
{
    balance = new_amount;
}
void Account::close_account()
{
    balance = 0;
}
Account::~Account()
{
    delete[] name;
    delete[] IBAN;
}