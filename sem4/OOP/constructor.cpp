#include <iostream>
using namespace std;

class A
{
    int age;

public:
    A(int x)
    {
        age = x;
    }
    int getdata()
    {
        return age;
    }
};
int main()
{
    A a(28);
    cout << a.getdata();
    return 0;
}