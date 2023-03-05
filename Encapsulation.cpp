#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) // Setter
    {
        Name = name;
    }
    string getName() // getter
    {
        return Name;
    }
    void setCompany(string company) //
    {
        Company = company;
    }
    string getCompany() //
    {
        return Company;
    }
    void setAge(int age) //
    {
        if (age >= 18)
        {
            Age = age;
        }
    }
    int getAge() //
    {
        return Age;
    }
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

    employee1.setAge(15);
    cout << employee1.getName() << " is " << employee1.getAge() << " years old " << endl;

    return 0;
}