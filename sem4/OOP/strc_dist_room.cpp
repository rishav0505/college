#include <iostream>
using namespace std;
struct distance
{
    int feet, inch;
};
struct room
{
    struct distance length, width;
};

int main()
{
    float n, i, area;
    struct room a;
    cout << "Enter length in ft & inches:\n";
    cin >> a.length.feet >> a.length.inch;
    cout << "Enter width in ft & inches:\n";
    cin >> a.width.feet >> a.width.inch;
    n = a.length.feet + (float)a.length.inch / 12;
    i = a.width.feet + (float)a.width.inch / 12;
    area = n * i;
    cout << "Area = " << area << " sq.ft";
    return 0;
}