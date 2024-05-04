#include <iostream>
using namespace std;

//завдання 1

int main()
{
	int a, b;

	cout << "Enter first numer: \n";
	cin >> a;
	cout << "Enter second numer: \n";
	cin >> b;

	if (a < b)
	{
		b = a;
		cout << "Lowest number: " << b;
	}
	else
	{
		a = b;
		cout << "Lowest number: " << a;
	}

	return 0;
}