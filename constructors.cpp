#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company;
    int Age;

    void Intro()
    {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "age: " << Age << endl;
    }
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }
};

int main()
{

    Employee employee1 = Employee("Saldina", "YT", 25);
    employee1.Intro();

    Employee employee2 = Employee("John", "Apple", 29);
    employee2.Intro();

    return 0;
}