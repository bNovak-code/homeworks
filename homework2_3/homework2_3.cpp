#include <iostream>
using namespace std;

/*завдання 3, баг був у тому що була відсутні лапки " на початку речення, яке ми хочемо вивести,
і відсутність крапки коми в кінці*/
int main()
{
	cout << "Is there a bug here ?";
	return 0;
}