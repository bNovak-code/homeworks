#include <iostream>
using namespace std;

//Завдання 5-6
int myCoolDivision(unsigned short int FirstValue, unsigned short int SecondValue);

int main()
{
	unsigned short int x, y;
	int result;

	cout << "Enter first numer: ";
	cin >> x;
	cout << "\nEnter second numer: ";
	cin >> y;

	result = myCoolDivision(x, y);

	if (result == -1)
	{
		cout << "\nError occurred, the result is " << result;
	}
	else
	{
		cout << "\nThe result of division is: " << result;
	}

	return 0;
}

int myCoolDivision(unsigned short int FirstValue, unsigned short int SecondValue)
{
	if (SecondValue == 0)
	{
		return -1;
	}
	else
	{
		return FirstValue / SecondValue;
	}
}