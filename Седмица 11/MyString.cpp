//
// Created by lyubo on 13.05.19.
//

#include "MyString.h"

MyString::MyString()
{
    MyVector<char>::push_back('\0');
}

const char* MyString::get_cstring() const {
    return MyVector<char>::values;
}
