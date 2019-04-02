#include <iostream>
#pragma once

template <class T>
class MyVector
{
    private:
        T* values;
        int size;
        int maxSize;

        void resize(); 
    public:
        MyVector(); //Default
        MyVector(const MyVector&); //Copy
        MyVector<T>& operator=(const MyVector&); //Operator=

        void set_element(int, T); //pos, val
        void push_back(T);
        void insert(int, T); //pos, val
        void remove(int); //pos
        void print() const;
        
        T get_element(int) const;
        T pop_back();
        T begin() const;
        T end() const;
        int get_size() const;
        T operator[](int) const;

        friend std::ostream& operator << (std::ostream& out, const MyVector&);
        friend std::istream& operator >> (std::istream& in, MyVector&);
        ~MyVector();
};

template <class T>
MyVector<T>::MyVector():size(0), maxSize(10)
{
    values = new T[maxSize];
}

template <class T>
MyVector<T>::MyVector(const MyVector& rhs): size(rhs.size), maxSize(rhs.maxSize)
{
    values = new T[maxSize];

    for(int i = 0; i < size; i++)
    {
        values[i] = rhs.values[i];
    }
}

template <class T>
MyVector<T>& MyVector<T>::operator=(const MyVector& rhs)
{
    if(this != &rhs)
    {
        delete[] values;

        maxSize = rhs.maxSize;
        size = rhs.size;

        values = new T[maxSize];

        for(int i = 0; i < size; i++)
        {
            values[i] = rhs.values[i];
        }
    }
    return *this;
}

template <class T>
void MyVector<T>::resize()
{
    maxSize*=2;
    T* newValues = new T[maxSize];

    for(int i = 0; i < size; i++)
    {
        newValues[i] = values[i];
    }

    delete[] values;

    values = newValues;
}

template <class T>
void MyVector<T>::set_element(int pos, T val)
{
    if(pos <= size) 
        values[pos] = val;
    else 
        std::cout << "Invalid position \n";
}

template <class T>
void MyVector<T>::push_back(T val)
{
    if(size == maxSize)
        resize();

    values[size] = val;
    size++;
}

template <class T>
void MyVector<T>::insert(int pos, T val)
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

template <class T>
void MyVector<T>::remove(int pos)
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

template <class T>
void MyVector<T>::print() const
{
    for(int i = 0; i < size; i++)
        std::cout << values[i] << " ";

    std::cout << std::endl;
}


template <class T>
T MyVector<T>::get_element(int pos) const
{
    if(pos < size) 
        return values[pos];
    else 
        return -1;
}

template <class T>
T MyVector<T>::pop_back()
{
    if(size != 0)
    {
        size--;
        return values[size];
    }
    else
        std::cout << "No values to pop \n";
}


template <class T>
T MyVector<T>::begin() const
{
    if(size != 0) 
        return values[0];
    else
        std::cout << "No elements\n"; 
}


template <class T>
T MyVector<T>::end() const
{
    if(size != 0) 
        return values[size-1];
    else
        std::cout << "No elements\n"; 
}

template <class T>
int MyVector<T>::get_size() const
{
    return size;
}

template <class T>
T MyVector<T>::operator[](int pos) const
{
    if(pos > size)
        return -1;
    else
        return values[pos];
       
}

template <class T>
MyVector<T>::~MyVector()
{
    delete[] values;
}

template <class T>
std::ostream& operator << (std::ostream& out, const MyVector<T>& v)
{
    for(int i = 0; i < v.size; i++)
    {
        out << v.values[i] << " ";
    }
    return out;
}

template <class T>
std::istream& operator >> (std::istream& in, MyVector<T>& v)
{
    int n;
    T t;

    std::cout << "Enter amount of items to enter: ";
    in >> n;

    for(int i = 0; i < n; i++)
    {
        in >> t;
        v.push_back(t);
    }   
}

