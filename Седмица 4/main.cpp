#include <iostream>
#include "MyVector.h"
int main() {

    MyVector a;

    for(int i = 1; i <= 15; i++)
    {
        a.push_back(i);
    }
                        //1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
    a.set_element(5,3); //1 2 3 4 5 3 7 8 9 10 11 12 13 14 15 
    
    a.insert(6,-5);     //1 2 3 4 5 3 -5 7 8 9 10 11 12 13 14 15
    a.remove(5);        //1 2 3 4 5 -5 7 8 9 10 11 12 13 14 15
    

    std::cout << a.get_element(3) << std::endl;
    std::cout << a.pop_back() << std::endl;
    //1 2 3 4 5 -5 7 8 9 10 11 12 13 14

    std::cout << a.begin() << " " << a.end() << std::endl;
    
    a.print();
}   