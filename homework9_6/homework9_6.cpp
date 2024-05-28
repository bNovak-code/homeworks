#include <iostream>
using namespace std;

int main() 
{
    int* ptr = new int(10);  // Динамічно виділяємо пам'ять для цілого числа і присвоюємо значення 10

    cout << "Value pointed to by ptr: " << *ptr << endl;  // Виводимо значення, на яке вказує ptr

    // Забуваємо викликати delete, що призводить до витоку пам'яті
    delete ptr; //fixed

    return 0;
}