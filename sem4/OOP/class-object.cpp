#include <iostream>
using namespace std;

class house
{
private:
    int length, breadth, area;

public:
    void setdata(int x, int y)
    {
        length = x;
        breadth = y;
    }
    void areaa()
    {
        area = length * breadth;
    }
    int getdata()
    {
        return area;
    }
};
int main()
{
    house h1;
    h1.setdata(500, 300);
    h1.areaa();
    cout << h1.getdata();
    return 0;
}