#include <iostream>


//Създаваме структурата Car
struct Car
{
    char manufacture[50];
    char model[50];
    int horsepower;
    int price;
};

void fillCarInfo(Car& obj) //Приемама референция към обекта от тип Car, с цел да работим директно върху него, а не върху копие
{
    std::cin >> obj.manufacture;
    std::cin >> obj.model;
    std::cin >> obj.horsepower;
    std::cin >> obj.price;
}

void printCarInfo(const Car& obj) //Приемама референция към обекта от тип Car, с цел да работим директно върху него, а не върху копие. Const е, защото не променяме обекта
{
    std::cout << obj.manufacture << " " << obj.model << " ";
    std::cout << obj.horsepower << " ";
    std::cout << obj.price << std::endl;
}

int main()
{
    int n;
    std::cin >> n;

    Car* cars = new Car[n]; //Заделяме памет за динамичен масив от коли, с размер n


    for(int i = 0; i < n; i++)
    {
        fillCarInfo(cars[i]); //Въвеждаме информацията за всяка кола.
        //Sidenote: като имаме динамичен масив, можем да имаме достъп като нормален масив - [ ]
    }

    int p, w;
    std::cin >> p >> w;
    for(int i = 0; i < n; i++)
    {
        if(cars[i].price <= p) printCarInfo(cars[i]); //Извеждаме информация за колата, съотвестваща на критерия цена
        if(cars[i].horsepower >= w) printCarInfo(cars[i]); //Извеждаме информация за колата, съотвестваща на критерия мощност
    }
    
	return 0;
}
