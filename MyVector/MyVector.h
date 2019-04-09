#pragma once

class MyVector
{
    private:
        int* values;
        int size;
        int maxSize;

        void resize(); 
    public:
        MyVector(); //Default
        MyVector(const MyVector&); //Copy
        MyVector& operator=(const MyVector&); //Operator=

        void set_element(int, int); //pos, val
        void push_back(int);
        void insert(int, int); //pos, val
        void remove(int); //pos
        void print() const;
        
        int get_element(int) const;
        int pop_back();
        int begin() const;
        int end() const;
        int get_size() const;

        int operator[](int) const;

        ~MyVector();
};
