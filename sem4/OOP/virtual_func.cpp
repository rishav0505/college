#include <iostream>
using namespace std;

class base
{
public:
    virtual void show()
    {
        cout << "Base class\n";
    }
};
class derived1 : public base
{
public:
    void show()
    {
        cout << "Derived 1 class\n";
    }
};
class derived2 : public base
{
public:
    void show()
    {
        cout << "Derived 2 class\n";
    }
};
int main()
{
    base *ptr;

    ptr = new derived1;
    ptr->show();

    ptr = new derived2;
    ptr->show();
    return 0;
}
/*base class pointer can access only base class member func
base class pointer cannot access derived class functionalities
to access derived class member func make base class func as virtual function

during runtime it is decided that which class and which function is to call
according to the reference inside pointer - late/dynamic binding*/