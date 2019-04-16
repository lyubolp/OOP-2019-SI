#include <iostream>
#pragma once;

template <class T, class S>

class MyPair
{
    private:
        T first;
        S second;
    public:
        MyPair();
        MyPair(T,S);

        void set_first(T);
        void set_second(S);

        const T get_first() const;
        const S get_second() const;

        const bool operator==(const MyPair&) const;

        

};

template <class T, class S>
MyPair<T,S>::MyPair()
{
    first = T();
    second = S();
}

template <class T, class S>
MyPair<T,S>::MyPair(T new_first, S new_second)
{
    first = new_first;
    second = new_second;
}

template <class T, class S>
void MyPair<T,S>::set_first(T object_to_be_set)
{
    first = object_to_be_set;
}

template <class T, class S>
void MyPair<T,S>::set_second(S object_to_be_set)
{
    second = object_to_be_set;
}


template <class T, class S>
const T MyPair<T,S>::get_first() const
{
    return first;
}

template <class T, class S>
const S MyPair<T,S>::get_second() const
{
    return second;
}

template <class T, class S>
const bool MyPair<T,S>::operator==(const MyPair& object_to_compare_to) const
{
    return (first == object_to_compare_to.first) && (second == object_to_compare_to.second);
}



template <class T, class S>
std::ostream& operator << (std::ostream& out, const MyPair<T,S>& object_to_print)
{
    out << object_to_print.get_first() << " " << object_to_print.get_second();
    return out;
}
