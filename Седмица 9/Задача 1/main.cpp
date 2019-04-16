#include <iostream>
#include <cstring>

#include "MyVector.hpp"

int main() {

    MyVector<char> semi_string;

    char temp_input;
    

    while(std::cin.get(temp_input) && temp_input != '\n')
    {
        semi_string.push_back(temp_input);
    }

    semi_string.push_back('\0');

    char* temp = semi_string.return_value_as_cstring();

    std::cout << temp;


    return 0;
}
