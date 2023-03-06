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

// Inheritence Code

class Developer : public Employee
{
public:
    string FavProgrammingLang;
    Developer(string name, string company, int age, string favProgrammingLang)
        : Employee(name, company, age)
    {
        FavProgrammingLang = favProgrammingLang;
    }
    void FixBugs()
    {
        cout << getName() << ",is Fixing bugs using " << FavProgrammingLang << endl;
    }
};

class Teacher : public Employee
{
public:
    string Subject;
    void PrepareLesson()
    {
        cout << getName() << " is preparing " << Subject << endl;
    }
    Teacher(string name, string company, int age, string subject)
        : Employee(name, company, age)
    {
        Subject = subject;
    }
};

int main()
{

    Developer d = Developer("John", "Apple", 35, "Python");
    d.FixBugs();
    d.AskForPromotion();

    Teacher t = Teacher("Jack", "KVK", 65, "Maths");
    t.PrepareLesson();
    t.AskForPromotion();

    return 0;
}