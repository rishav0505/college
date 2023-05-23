#include <iostream>
using namespace std;

class Time
{
    int hr, min, sec;

public:
    Time(int h = 0, int m = 0, int s = 0) : hr(h), min(m), sec(s) {}
    void setTime()
    {
        cout << "Enter time hr, min, sec:\n";
        cin >> hr >> min >> sec;
    }
    void display()
    {
        cout << hr << "hr " << min << "min " << sec << "sec";
    }
    Time operator+(Time w)
    {
        int h = hr + w.hr, m = min + w.min, s = sec + w.sec;
        while (s >= 60)
        {
            s -= 60;
            m++;
        }
        while (m >= 60)
        {
            m -= 60;
            h++;
        }
        return Time(h, m, s);
    }
};
int main()
{
    Time a(5, 54, 60), b(1, 7, 3), c;
    c = a + b;
    c.display();
    return 0;
}