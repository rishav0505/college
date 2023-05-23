#include <iostream>
using namespace std;

class employee
{
public:
    string name;
    long long int id;
};

class manager : private employee
{
    float salary;

public:
    using employee::id;
    using employee::name;
    void set(float s)
    {
        salary = s;
    }
    float get()
    {
        return salary;
    }
    string designation;
};

class scientist : public employee
{
    float salary;

public:
    using employee::id;
    using employee::name;
    void set(float s)
    {
        salary = s;
    }
    float get()
    {
        return salary;
    }
    int num_of_publications;
};

int main()
{
    scientist s;
    manager m;
    float salary;

    cout << "Enter details of manager:\nName: ";
    cin >> m.name;
    cout << "ID: ";
    cin >> m.id;
    cout << "Salary: ";
    cin >> salary;
    m.set(salary);
    cout << "Designation: ";
    cin >> m.designation;

    cout << "Enter details of scientist:\nName: ";
    cin >> s.name;
    cout << "ID: ";
    cin >> s.id;
    cout << "Salary: ";
    cin >> salary;
    s.set(salary);
    cout << "Number of publications: ";
    cin >> s.num_of_publications;

    cout << "\nDetails of manager:\nName = " << m.name;
    cout << "\nID = " << m.id;
    cout << "\nSalary = " << m.get();
    cout << "\nDesignation = " << m.designation;
    cout << "\n\nDetails of scientist:\nName = " << s.name;
    cout << "\nID = " << s.id;
    cout << "\nSalary = " << s.get();
    cout << "\nNumber of publications = " << s.num_of_publications;
    return 0;
}