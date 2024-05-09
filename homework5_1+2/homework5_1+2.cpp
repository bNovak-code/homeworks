#include <iostream>
using namespace std;

//Завдання 1
unsigned long int Perimeter(unsigned short int FirstParam, unsigned short int SecondParam); //прототип функції

int main()
{
	unsigned short int length;
	unsigned short int width;
	unsigned short int result;

	cout << "Enter length value: ";
	cin >> length;
	cout << "\nEnter width value: ";
	cin >> width;

	result = Perimeter(length, width);           //виклик функції Perimeter всередині main функції

	cout << "\nThe result is: " << result;
	return 0;
}

//Завдання 2
unsigned long int Perimeter(unsigned short int FirstParam, unsigned short int SecondParam) //визначення функції
{
	return (FirstParam + SecondParam) * 2;
}