#include <iostream>
using namespace std;

int myFunc(unsigned short int x);

int main()
{
    unsigned short int x, y; /* x ����������, ��� �� �������������, ����� ������ � �� ����� ���� �������� ��� ������ � ������� (cin)
                                ��� ��������� ������ x = 5 */
    y = myFunc(x);
    cout << "x: " << x << " y: " << y << "\n";
}

int myFunc(unsigned short int x); // <- ����� ������ � �����
{
    return (4 * x);
}