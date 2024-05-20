#include <iostream>
using namespace std;

int multiplierFunc(int number, int multiplier);

int main()
{
    int number, multiplier, result;
    cout << "\nEnter the number: ";
    cin >> number;
    cout << "\nEnter the multiplier: ";
    cin >> multiplier;

    result = multiplierFunc(number, multiplier);

    cout << "\nResult: " << result;

    return 0;
}

int multiplierFunc(int number, int multiplier)
{
    cout << "Processing multiplierFunc( " << number << ", " << multiplier << " )...\n";

    if (multiplier == 0)
    {
        return 1;
    }
    else
    {
        return number * multiplierFunc(number, multiplier - 1);
    }
}