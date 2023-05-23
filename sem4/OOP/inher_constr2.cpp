#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "\nDefault constructor of base class\n";
    }
    base(int n)
    {
        cout << "\nParameterized constructor of base class\n";
    }
};
class derived : public base
{
public:
    derived()
    {
        cout << "\nDefault constructor of derived class\n";
    }
    derived(int n)
    {
        cout << "\nParameterized constructor of derived class\n";
    }
};
int main()
{
    // 1st Default constructor of base class then Default constructor of derived class is called
    derived d;
    // 2nd Default constructor of base class then Parameterized constructor of derived class is called
    // Parameterized constructor of base class is not called when para. constructor is present 
    // in derived class
    derived d1(3);
    // base class constructor is called always
    return 0;
}