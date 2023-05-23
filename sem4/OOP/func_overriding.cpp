#include <iostream>
using namespace std;

class base
{
public:
    void msg()
    {
        cout << "Base Class\n";
    }
};
class derived : public base
{
public:
    void msg()
    {
        cout << "Derived Class\n";
    }
};
int main()
{
    base b;
    b.msg();

    derived d;
    d.msg();
    return 0;
}
// redefining functionality of base class into derived class, then if we create object of derived
// class derived class function is called