#include <iostream>
#include "Login.h"
#include <cstring>

Login::Login(): sessionType(0)
{
    username = new char[5];
    username = "test\0";

    password = new char[5];
    password = "1234\0";
}
Login::Login(char* user):sessionType(1)
{
    int size = strlen(user);
    username = new char[size+1];
    
    strcpy(this->username, user);

    int t;

    std::cout << "Password length: ";
    std::cin >> t;
    std::cout << std::endl;

    password = new char[t+1]; //За да има място и за \0

    std::cin>> password;
}
Login::Login(char* user, char* pass):sessionType(1)
{
    int size = strlen(user);
    username = new char[size];

    size = strlen(pass);
    password = new char[size];

    strcpy(this->username, user);
    strcpy(this->password, pass);
}
Login::Login(char* user, char* pass, int session): sessionType(session)
{
    int size = strlen(user);
    username = new char[size];

    size = strlen(pass);
    password = new char[size];

    strcpy(this->username, user);
    strcpy(this->password, pass);
}
Login::Login(const Login& rhs)
{
    int size = strlen(username);
    username = new char[size];

    size = strlen(password);
    password = new char[size];


    strcpy(this->username, rhs.username);
    strcpy(this->password, rhs.password);
    sessionType = rhs.sessionType;
}

void Login::setUsername(const char* user)
{
    int size = strlen(user);
    username = new char[size];

    strcpy(this->username, user);
}
void Login::setPassword(const char* pass)
{
    int size = strlen(pass);
    password = new char[size];

    strcpy(this->password, pass);
}
void Login::setSession(const int session)
{
    sessionType = session;
}

void Login::print() const
{
    std::cout << username << " " << password << " " << sessionType << std::endl;
}
char* Login::getUsername() const
{
    return username;
}
char* Login::getPassword() const
{
    return password;
}
int Login::getSession() const
{
    return sessionType;
}