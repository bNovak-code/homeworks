#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y; /* x оголошеним, але не ініціалізована, тобто змінній Х їй треба дати значееня або вводом в консоль (cin)
                                або наприклад просто x = 5 */
    y = myFunc(x);
    cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x); // <- лишня крапка з комою
{
    return (4 * x);
}