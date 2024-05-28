#include <iostream>

using namespace std;

class Cat {
public:
    Cat(int age) : itsAge(age) {}
    ~Cat() {}
    int GetAge() const { return itsAge; }

private:
    int itsAge;
};

// ������� ����� ������� �������� �� Cat
Cat* MakeCat(int age);

int main() {
    int age = 7;
    // �������� �������� �� ��'��� Cat �� MakeCat
    Cat* pBoots = MakeCat(age);
    cout << "Boots is: " << pBoots->GetAge() << " years old" << endl;

    // ϳ��� ������������ ��'���� ��������� ���'���
    delete pBoots;

    return 0;
}

Cat* MakeCat(int age) {
    Cat* pCat = new Cat(age);  // �������� �������� ���'��� ��� Cat
    return pCat;               // ��������� �������� �� ��'��� Cat
}