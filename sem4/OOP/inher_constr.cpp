#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "Default constructor of base class\n";
    }
    base(int n)
    {
        cout << "Parameterized constructor of base class\n";
    }
};
class derived : public base
{
};
int main()
{
    derived d;
    // Parameterised constructor cannot be accessed of base class through derived class
    /*if we dont specify default constructor in derived class,
    then derived class will use default constructor from base class*/
    // derived d1(3); INVALID 
    return 0;
}