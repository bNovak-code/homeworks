#include <iostream>
using namespace std;

int main() 
{
    int* ptr = new int(10);  // �������� �������� ���'��� ��� ������ ����� � ���������� �������� 10

    cout << "Value pointed to by ptr: " << *ptr << endl;  // �������� ��������, �� ��� ����� ptr

    // �������� ��������� delete, �� ���������� �� ������ ���'��
    delete ptr; //fixed

    return 0;
}