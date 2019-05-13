//
// Created by lyubo on 13.05.19.
//

#ifndef CLIONWORKDIR_MYSTRING_H
#define CLIONWORKDIR_MYSTRING_H
#include "MyVector.hpp"

class MyString : public MyVector<char> {
public:
    MyString();
    const char* get_cstring() const;
};


#endif //CLIONWORKDIR_MYSTRING_H
