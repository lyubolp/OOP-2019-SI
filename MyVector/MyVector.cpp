#include "MyVector.h"
#include <iostream>

MyVector::MyVector():size(0), maxSize(10)
{
    values = new int[maxSize];
}

MyVector::MyVector(const MyVector& rhs): size(rhs.size), maxSize(rhs.maxSize)
{
    values = new int[maxSize];

    for(int i = 0; i < size; i++)
    {
        values[i] = rhs.values[i];
    }
}
MyVector& MyVector::operator=(const MyVector& rhs)
{
    if(this != &rhs)
    {
        delete[] values;

        maxSize = rhs.maxSize;
        size = rhs.size;

        values = new int[maxSize];

        for(int i = 0; i < size; i++)
        {
            values[i] = rhs.values[i];
        }
    }
    return *this;
}
void MyVector::resize()
{
    maxSize*=2;
    int* newValues = new int[maxSize];

    for(int i = 0; i < size; i++)
    {
        newValues[i] = values[i];
    }

    delete[] values;

    values = newValues;
}
void MyVector::set_element(int pos, int val)
{
    if(pos <= size) 
        values[pos] = val;
    else 
        std::cout << "Invalid position \n";
}
void MyVector::push_back(int val)
{
    if(size == maxSize)
        resize();

    values[size] = val;
    size++;
}
void MyVector::insert(int pos, int val)
{
    if(pos <= size)
    {
        if(size == maxSize)
            resize();
        
        for(int i = size; i > pos; i--)
        {
            values[i] = values[i-1];
        }
        values[pos] = val;
        size++;
    }
}

void MyVector::remove(int pos)
{
    if(pos <= size)
    {
        for(int i = pos; i < size-1; i++)
        {
            values[i] = values[i+1];
        }
        size--;
    }
    else
        std::cout << "Invalid position \n";
}

void MyVector::print() const
{
    for(int i = 0; i < size; i++)
        std::cout << values[i] << " ";

    std::cout << std::endl;
}


int MyVector::get_element(int pos) const
{
    if(pos < size) 
        return values[pos];
    else 
        return -1;
}

int MyVector::pop_back()
{
    if(size != 0)
    {
        size--;
        return values[size];
    }
    else
        std::cout << "No values to pop \n";
}

int MyVector::begin() const
{
    if(size != 0) 
        return values[0];
    else
        std::cout << "No elements\n"; 
}

int MyVector::end() const
{
    if(size != 0) 
        return values[size-1];
    else
        std::cout << "No elements\n"; 
}

int MyVector::get_size() const
{
    return size;
}

MyVector::~MyVector()
{
    delete[] values;
}

