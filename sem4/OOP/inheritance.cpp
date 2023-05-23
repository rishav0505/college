#include <iostream>
using namespace std;

class rectangle
{
public:
    int length, breadth;
    void area()
    {
        cout << "Area = " << length * breadth;
    }
};
class cuboid : public rectangle
{
public:
    int height;
    void volume()
    {
        cout << "\nVolume = " << length * breadth * height;
    }
};
int main()
{
    cuboid c;
    c.height = 10;
    c.length = 20;
    c.breadth = 30;

    c.area();
    c.volume();
    return 0;
}