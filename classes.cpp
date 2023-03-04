#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    string company;
    int age;

    void Intro()
    {
        cout << "Name: " << name << endl;
        cout << "Company: " << company << endl;
        cout << "age: " << age << endl;
    }
};

int main()
{

    Employee employee1;
    employee1.name = "Alex";
    employee1.company = "Apple";
    employee1.age = 28;
    employee1.Intro();

    Employee employee2;
    employee2.name = "Roger";
    employee2.company = "Amazon";
    employee2.age = 25;
    employee2.Intro();
}