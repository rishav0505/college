#include <iostream>
using namespace std;
// it just replaces the content of inline function in calling function
inline int square(int a)
{
    return a * a;
}
inline int cube(int a)
{
    return a * a * a;
}
int main()
{
    cout << "\nSquare of 5 = " << square(5);
    cout << "\nCube of 5 = " << cube(5);
    return 0;
}