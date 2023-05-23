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
        base::msg(); // explicit call
    }
};
int main()
{
    base b;
    b.msg();

    derived d; 
    d.msg(); // to call base class function from derived class function
    return 0;
}
