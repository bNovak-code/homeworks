#include <iostream>
using namespace std;


int main()
{
    int* ptr = new int(10);  // Динамічно виділяємо пам'ять для цілого числа і присвоюємо значення 10

    cout << "Value pointed by ptr: " << *ptr << endl;  // Виводимо значення, на яке вказує ptr

    delete ptr;  // Звільняємо пам'ять

    ptr = nullptr; //fixed

    // Тепер ptr - блукаючий вказівник, тому що пам'ять, на яку він вказує, звільнена
    cout << "Value pointed by ptr after delete: " << *ptr << endl;  // Це може спричинити непередбачувану поведінку

    return 0;
}
