#include <iostream>
using namespace std;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class Employee : AbstractEmployee
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
    void AskForPromotion()
    {
        if (Age > 30)
        {
            cout << Name << ", is promoted" << endl;
        }
        else
        {
            cout << Name << ", is not promoted" << endl;
        }
    }
};

int main()
{

    Employee employee1 = Employee("Saldina", "YT", 25);
    employee1.AskForPromotion();

    Employee employee2 = Employee("John", "Apple", 35);
    employee2.AskForPromotion();

    return 0;
}