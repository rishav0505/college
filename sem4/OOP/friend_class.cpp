#include <iostream>
using namespace std;

class A
{
    int a1;

public:
    A(int a = 0)
    {
        a1 = a;
    }
    friend class B;
};

class B
{
    int b1;

public:
    B(int b = 0)
    {
        b1 = b;
    }
    int sum()
    {
        A a(5);
        int x = b1 + a.a1;
        return x;
    }
};

int main()
{
    B b(3);
    cout << "Sum = " << b.sum();
    return 0;
}