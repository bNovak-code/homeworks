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

// Функція тепер повертає вказівник на Cat
Cat* MakeCat(int age);

int main() {
    int age = 7;
    // Одержуємо вказівник на об'єкт Cat від MakeCat
    Cat* pBoots = MakeCat(age);
    cout << "Boots is: " << pBoots->GetAge() << " years old" << endl;

    // Після використання об'єкта звільняємо пам'ять
    delete pBoots;

    return 0;
}

Cat* MakeCat(int age) {
    Cat* pCat = new Cat(age);  // Динамічно виділяємо пам'ять для Cat
    return pCat;               // Повертаємо вказівник на об'єкт Cat
}