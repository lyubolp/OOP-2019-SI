#include <iostream>
#include <cstring>
#include "Bank.h"
#include "Account.h"

Bank::Bank()
{
    name = new char[1];
    name[0] = '\0';

    accounts = new Account[1];

    amount = 0;
    capacity = 1;
}
Bank::Bank(const Bank& object_to_copy_from)
{
    int size = strlen(object_to_copy_from.name);

    name = new char[size+1];
    strcpy(name, object_to_copy_from.name);

    amount = object_to_copy_from.amount;
    capacity = object_to_copy_from.capacity;

    accounts = new Account[capacity];

    for(int i = 0; i < amount; i++)
    {
        accounts[i] = object_to_copy_from.accounts[i];
    }
}
Bank& Bank::operator= (const Bank& object_to_copy_from)
{
    if(this != &object_to_copy_from)
    {
        delete[] name;
        delete[] accounts;

        int size = strlen(object_to_copy_from.name);

        name = new char[size+1];
        strcpy(name, object_to_copy_from.name);

        amount = object_to_copy_from.amount;
        capacity = object_to_copy_from.capacity;

        accounts = new Account[capacity];

        for(int i = 0; i < amount; i++)
        {
            accounts[i] = object_to_copy_from.accounts[i];
        }   
    }
    return *this;
}
        
void Bank::set_name(const char* new_name)
{
    int size = strlen(new_name);

    delete[] name;
    name = new char[size + 1];
    strcpy(name, new_name);
}

void Bank::add_account(const Account& account_to_add)
{
    if(amount == capacity)
        resize();

    accounts[amount] = account_to_add;
    amount++;
}
void Bank::remove_account(int index_to_remove_at)
{
    for(int i = index_to_remove_at; i < amount - 1; i++)
    {
        accounts[i] = accounts[i+1];
    }
    amount--;
}

Bank& Bank::operator+=(const Account& account_to_add)
{
    add_account(account_to_add);

    return *this;
}
Bank& Bank::operator-=(int index_to_remove)
{
    remove_account(index_to_remove);
    return *this;
}

void Bank::change_account(int index_to_change)
{  
    double new_balance;
    std::cin >> new_balance;

    accounts[index_to_change].change_amount(new_balance);
}
Bank::~Bank()
{
    delete[] name;
    delete[] accounts;
}