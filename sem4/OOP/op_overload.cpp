#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int x1 = 0)
    {
        x = x1;
    }
    A operator+(A w) // addition of two object
    {
        return A(x + w.x);
    }
    void operator++() // pre increment
    {
        ++x;
    }
    void operator++(int) // post increment
    {
        x++;
    }
    // int operator<(A w)
    // {
    //     if (x < w.x)
    //         return 1;
    //     else
    //         return 0;
    // }
    // int operator>(A w)
    // {
    //     if (x > w.x)
    //         return 1;
    //     else
    //         return 0;
    // }
    friend bool operator>(A x, A y);
    friend bool operator<(A x, A y);
    void print()
    {
        cout << "\n" << x;
    }
};
bool operator>(A x, A y)
{
    return x.x > y.x;
}
bool operator<(A x, A y)
{
    return x.x < y.x;
}
int main()
{
    int a = 30, b = 20, c = 0;
    c = a + b;
    cout << "\n = " << c;

    A a1(89), a2(90), a3;

    a3 = a1 + a2;
    a3.print();

    ++a3;
    a3++;
    a3.print();

    if (a2 > a1)
        cout << "\na2 is greater than a1";
    else if (a2 < a1)
        cout << "\na2 is less than a1";
    return 0;
}