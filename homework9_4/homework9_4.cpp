#include <iostream>
using namespace std;


int main()
{
    int* ptr = new int(10);  // �������� �������� ���'��� ��� ������ ����� � ���������� �������� 10

    cout << "Value pointed by ptr: " << *ptr << endl;  // �������� ��������, �� ��� ����� ptr

    delete ptr;  // ��������� ���'���

    ptr = nullptr; //fixed

    // ����� ptr - ��������� ��������, ���� �� ���'���, �� ��� �� �����, ��������
    cout << "Value pointed by ptr after delete: " << *ptr << endl;  // �� ���� ���������� ��������������� ��������

    return 0;
}
