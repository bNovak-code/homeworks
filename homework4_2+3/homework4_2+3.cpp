#include <iostream>
using namespace std;

/*�������� 2:
�������� ������� 3 �������� a, b, c.

(� "����" � ��� �� ��������� (==), ��������� (=), 
���� � "����" � ��� � ��� �� ������� �� 50 �������� ������ �������� ������ a � b) 

����� ����������� ��������� �������� ���� ��������� ������� a, b �� �� ������� � � ���� ���� ���� �������� ������ a � b.
*/

//�������� 3:
int main()
{
    int a, b, c;

    cout << "Please enter three numbers) \n";
    cout << "a: ";
    cin >> a;
    cout << "\nb: ";
    cin >> b;
    cout << "\nc: ";
    cin >> c;

    if (c = (a - b)) // ��� �� ���� �������� ��������� "==", ����� c == (a - b)
    {
        cout << "\na: ";
        cout << a;
        cout << " minus b: ";
        cout << b;
        cout << " equals c: ";
        cout << c << endl;
    }
    else
        cout << "a - b does not equal c: "<< endl; //��� ����� ������ << c, ���� ������

    return 0;
}

/*
���. 
��� ������� �� ����� �������� ���� ��������� �������� � �� ������ a � b.
���� � "����" �� ���� ����� c == (a - b).
� � "���"  cout << "a - b does not equal c: " << c << endl;
*/