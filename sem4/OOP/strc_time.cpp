#include <iostream>
using namespace std;

struct time
{
    int hr, min, sec;
};

int main()
{
    struct time t;
    cout << "Enter hr, min, time:\n";
    cin >> t.hr >> t.min >> t.sec;
    t.hr *= 60 * 60;
    t.min *= 60;
    t.sec += t.min + t.hr;
    cout << "Time in seconds = " << t.sec;
    return 0;
}