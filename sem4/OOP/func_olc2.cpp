#include <iostream>
using namespace std;

int area(int side)
{
    return side * side;
}
int area(int length, int breadth)
{
    return length * breadth;
}
float area(float radius)
{
    return 3.14f * radius * radius;
}
int main()
{
    cout << "\nArea of square of side 5 = " << area(5);
    cout << "\nArea of rectangle of length 5, breadth 10 = " << area(5, 10);
    cout << "\nArea of circle of radius 10.2 = " << area(10.2f);
    return 0;
}