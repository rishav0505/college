#include <iostream>
using namespace std;

class A
{
    unsigned int a1;

public:
    A(unsigned int a = 0)
    {
        a1 = a;
    }
    friend void fun();
};

class B
{
    unsigned int b1;

public:
    B(unsigned int b = 0)
    {
        b1 = b;
    }
    friend void fun();
};

void fun()
{
    A a(3);
    B b(4);
    unsigned int x = a.a1 + b.b1;
    cout << "Sum = " << x;
}

int main()
{
    fun();
    return 0;
}