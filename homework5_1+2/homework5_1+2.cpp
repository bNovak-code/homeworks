#include <iostream>
using namespace std;

//�������� 1
unsigned long int Perimeter(unsigned short int FirstParam, unsigned short int SecondParam); //�������� �������

int main()
{
	unsigned short int length;
	unsigned short int width;
	unsigned short int result;

	cout << "Enter length value: ";
	cin >> length;
	cout << "\nEnter width value: ";
	cin >> width;

	result = Perimeter(length, width);           //������ ������� Perimeter �������� main �������

	cout << "\nThe result is: " << result;
	return 0;
}

//�������� 2
unsigned long int Perimeter(unsigned short int FirstParam, unsigned short int SecondParam) //���������� �������
{
	return (FirstParam + SecondParam) * 2;
}