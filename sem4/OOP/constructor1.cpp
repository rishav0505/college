#include <iostream>
using namespace std;

class A
{
private:
    string name, proc;
    float battery, ram;

public:
    // parameterized constructor
    // constructor overloading for parameterized & no parameter constructor
    A(string name1 = "Null", string proc1 = "Xyz", float battery1 = 0.0, float ram1 = 0.0)
    {
        name = name1;
        proc = proc1;
        battery = battery1;
        ram = ram1;
    }
    // copy constructor
    A(A &obj2) 
    {
        name = obj2.name;
        proc = obj2.proc;
        battery = obj2.battery;
        ram = obj2.ram;
    }
    void getdata();
};
void A::getdata()
{
    cout << "\nname - " << name;
    cout << "\nprocessor - " << proc;
    cout << "\nbattery - " << battery;
    cout << "\nram - " << ram;
}
int main()
{
    A obj1, obj2("Null1", "Xyz1", 3, 8), obj3(obj2);
    obj1.getdata();
    obj2.getdata();
    obj3.getdata();
    return 0;
}