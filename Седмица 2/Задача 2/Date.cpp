#include "Date.h"
#include <iostream>

void Date::setDay(int d)
{
    day = d;
}
void Date::setMonth(int d)
{
    month = d;
}
void Date::setYear(int d)
{
    year = d;
}
void Date::setDayName(char* n)
{
    dayName = n;
}

void Date::displayA() const //dd/mm/yyyy
{
    std::cout << day << "/" << month << "/" << year;
}
void Date::displayB() const //dd.month_name.year
{
    std::cout << day << "/";

    if(month == 1) std::cout << "January";
    else if(month == 2) std::cout << "February";
    else if(month == 3) std::cout << "March";
    else if(month == 4) std::cout << "April";
    else if(month == 5) std::cout << "May";
    else if(month == 6) std::cout << "June";
    else if(month == 7) std::cout << "July";
    else if(month == 8) std::cout << "August";
    else if(month == 9) std::cout << "September";
    else if(month == 10) std::cout << "Octomber";
    else if(month == 11) std::cout << "November";
    else if(month == 12) std::cout << "December";

    std::cout << "/" << year;
}
void Date::displayC() const //day dd month_name
{
    int i = 0;
    while(dayName[i] != '\0')
    {
        std::cout << dayName[i];
        i++;
    }  

    std::cout << " " << day << " ";

    if(month == 1) std::cout << "January";
    else if(month == 2) std::cout << "February";
    else if(month == 3) std::cout << "March";
    else if(month == 4) std::cout << "April";
    else if(month == 5) std::cout << "May";
    else if(month == 6) std::cout << "June";
    else if(month == 7) std::cout << "July";
    else if(month == 8) std::cout << "August";
    else if(month == 9) std::cout << "September";
    else if(month == 10) std::cout << "Octomber";
    else if(month == 11) std::cout << "November";
    else if(month == 12) std::cout << "December";


}