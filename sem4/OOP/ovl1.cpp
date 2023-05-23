#include <iostream>
using namespace std;

class Point
{
    int x, y, z;

public:
    Point(int xx = 0, int yy = 0, int zz = 0)
    {
        x = xx;
        y = yy;
        z = zz;
    }
    Point operator-()
    {
        return Point(-x, -y, -z);
    }
    void display()
    {
        cout << "( " << x << " , " << y << " , " << z << " )";
    }
};
int main()
{
    Point p(10, 20, 30);
    p = -p;
    p.display();
    return 0;
}