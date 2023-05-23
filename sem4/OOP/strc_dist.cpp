#include <iostream>
using namespace std;

struct distance
{
    int feet, inch;
};

int main()
{
    float n, i, area;
    int ft, in;
    struct distance length, width;
    cout << "Enter length in ft & inches:\n";
    cin >> length.feet >> length.inch;
    cout << "Enter width in ft & inches:\n";
    cin >> width.feet >> width.inch;
    n = length.feet + (float)length.inch / 12;
    i = width.feet + (float)width.inch / 12;
    area = n * i;
    cout << "Area = " << area << " sq.ft";
    return 0;
}