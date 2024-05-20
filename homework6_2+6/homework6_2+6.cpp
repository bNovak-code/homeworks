#include <iostream>
#include <cmath>
using namespace std;

class Employee
{
public:
    Employee(unsigned int initialAge, unsigned int initialYearsOfService, unsigned int initialSalary);
    ~Employee();

    void SetAge(unsigned int ageSetter);
    unsigned int GetAge();

    void SetYearsOfService(unsigned int yearsOfServiceSetter);
    unsigned int GetYearsOfService();

    void SetSalary(int SalarySetter);
    int GetSalary();

    int GetRoundedSalary();

private:
    unsigned int age;
    unsigned int yearsOfService;
    unsigned int Salary; //краще не використовувати флоут або дабл через можливі проблеми з округленням і точністю
};

Employee::Employee(unsigned int initialAge, unsigned int initialYearsOfService, unsigned int initialSalary)
{
    age = initialAge;
    yearsOfService = initialYearsOfService;
    Salary = initialSalary;
}

Employee::~Employee()
{
}

void Employee::SetAge(unsigned int ageSetter)
{
    age = ageSetter;
}

unsigned int Employee::GetAge()
{
    return age;
}

void Employee::SetYearsOfService(unsigned int yearsOfServiceSetter)
{
    yearsOfService = yearsOfServiceSetter;
}

unsigned int Employee::GetYearsOfService()
{
    return yearsOfService;
}

void Employee::SetSalary(int SalarySetter)
{
    Salary = SalarySetter;
}

int Employee::GetSalary()
{
    return Salary;
}

int Employee::GetRoundedSalary()
{
    int roundedSalary = round(Salary / 10) * 10;  // Округлення до найближчих 10 доларів
    return roundedSalary;
}

int main()
{
    Employee Bob(27, 0, 20765), Jack(27, 0, 30846);
    Bob.SetAge(62);
    Bob.SetYearsOfService(35);
    Bob.SetSalary(55786);
    cout << "New employee Bob added to the system!\n";
    cout << "Bob's rounded salary is: " << Bob.GetRoundedSalary() << "\n";
    Jack.SetAge(30);
    Jack.SetYearsOfService(3);
    Jack.SetSalary(40492);
    cout << "New employee Jack added to the system!\n";
    cout << "Jack's rounded salary is: " << Jack.GetRoundedSalary() << "\n";
    return 0;
}