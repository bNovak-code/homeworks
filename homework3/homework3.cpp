#include <iostream>
using namespace std;

/*
Завдання 1:

Ваш вік - short int

Площа вашого заднього двору - float

Кількість зірок у галактиці - unsigned long long int (і цього не хватить :) )

Середній рівень випадання опадів за січень - short int
*/

int main() 
{   
    //Завдання 2:
    short int myAge = 24;
    float backyardTotalSpace = 28.6;
    unsigned long long int allStartInGalaxy = numeric_limits<unsigned long long int>::max();
    short int avarageAmountOfPrecipitation = 68;

    //Завдання 3:
    float pi = 3.14159;

    //Завдання 4:
    float newVariable = pi;

    //перевірка:
    cout << "myAge: " << myAge << "\n";
    cout << "backyardTotalSpace: " << backyardTotalSpace << "\n";
    cout << "allStartInGalaxy: " << allStartInGalaxy << "\n";
    cout << "avarageAmountOfPrecipitation: " << avarageAmountOfPrecipitation << "\n";
    cout << "pi: " << pi << "\n";
    cout << "newVariable: " << newVariable << "\n";

    return 0;
}

