#include <iostream>
using namespace std;

void myFunc(unsigned short int x);
int main()
{
    unsigned short int x, y;  /* x ����������, ��� �� ������������, ����� ����� � �� ����� ���� �������� ��� ������ � ������� (cin)
                                ��� ������ x = 5 ���������  y = myFunc(int);*/

    y = myFunc(int); //��� �� ���� ����� � �� int, ��������� � ��� �;
    cout << "x: " << x << "y: " << y << "\n";
}
void myFunc(unsigned short int x)
{
    return (4 * x); //������� � void, ��� ����� ��������� ��������
}