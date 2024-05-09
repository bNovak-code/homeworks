#include <iostream>
using namespace std;

void myFunc(unsigned short int x);
int main()
{
    unsigned short int x, y;  /* x оголошеним, але не ініціалізована, тобто змінній Х їй треба дати значееня або вводом в консоль (cin)
                                або просто x = 5 наприклад  y = myFunc(int);*/

    y = myFunc(int); //тут має бути змінна а не int, наприклак х або у;
    cout << "x: " << x << "y: " << y << "\n";
}
void myFunc(unsigned short int x)
{
    return (4 * x); //функція є void, але пробує повернути значення
}