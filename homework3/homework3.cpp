#include <iostream>
using namespace std;

/*
�������� 1:

��� �� - short int

����� ������ �������� ����� - float

ʳ������ ���� � ��������� - unsigned long long int (� ����� �� ������� :) )

������� ����� ��������� ����� �� ����� - short int
*/

int main() 
{   
    //�������� 2:
    short int myAge = 24;
    float backyardTotalSpace = 28.6;
    unsigned long long int allStartInGalaxy = numeric_limits<unsigned long long int>::max();
    short int avarageAmountOfPrecipitation = 68;

    //�������� 3:
    float pi = 3.14159;

    //�������� 4:
    float newVariable = pi;

    //��������:
    cout << "myAge: " << myAge << "\n";
    cout << "backyardTotalSpace: " << backyardTotalSpace << "\n";
    cout << "allStartInGalaxy: " << allStartInGalaxy << "\n";
    cout << "avarageAmountOfPrecipitation: " << avarageAmountOfPrecipitation << "\n";
    cout << "pi: " << pi << "\n";
    cout << "newVariable: " << newVariable << "\n";

    return 0;
}

