#pragma once

class Account
{
    private:
        char* name;
        char* IBAN;
        double balance;
    public:
        Account();
        Account(const char*, const char*);
        Account(const Account&);
        Account& operator=(const Account&);
        void change_amount(double);
        void close_account();
        ~Account();
};