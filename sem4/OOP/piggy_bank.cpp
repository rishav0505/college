#include <iostream>
using namespace std;

class AddAmount
{
    float amount = 50;

public:
    AddAmount()
    {
    }
    AddAmount(float n)
    {
        amount += n;
    }
    void display()
    {
        cout << "Final Amount: " << amount;
    }
};
int main()
{
    float f;
    cout << "Enter amount to add: ";
    cin >> f;
    AddAmount a(f);
    a.display();
    return 0;
}