#include <iostream>
using namespace std;

class A
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
    float add(float a, float b)
    {
        return a + b;
    }
    double add(int a, double b)
    {
        return a + b;
    }
    double add(double a, int b)
    {
        return a + b;
    }
};

int main()
{
    A a;
    cout << "Sum of:\nTwo int = " << a.add(1, 2);
    cout << "\nThree int = " << a.add(1, 2, 3);
    cout << "\nTwo float = " << a.add(1.2f, 2.2f);
    cout << "\ndouble, int = " << a.add(1.04, 2);
    cout << "\nint, double = " << a.add(1, 2.04);
    return 0;
}