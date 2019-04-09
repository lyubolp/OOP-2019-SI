#pragma once
#include "Account.h"

class Bank
{
    private:
        char* name;
        Account* accounts;
        int amount;
        int capacity;
        void resize();
    public:
        Bank();
        Bank(const Bank&);
        Bank& operator= (const Bank&);
        
        void set_name(const char*);
        void add_account(const Account&);
        void remove_account(int);

        Bank& operator+=(const Account&);
        Bank& operator-=(int);

        void change_account(int);
        ~Bank();
};