#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "\nDefault constructor of base class";
    }
    base(int n)
    {
        cout << "\nParameterized constructor of base class (" << n << ")";
    }
};
class derived : public base
{
public:
    derived() : base()
    {
        cout << "\nDefault constructor of derived class";
    }
    derived(int n) : base(n)
    {
        cout << "\nParameterized constructor of derived class (" << n << ")";
    }
};
int main()
{
    derived d;
    derived d1(3); // to call parameterized constructor of base class
    return 0;
}