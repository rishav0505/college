#include <iostream>
using namespace std;

class person
{
public:
    virtual void show() = 0; // pure virtual function  
    // (Abstract Class)
    // when we never want to instantiate object of base class
};
class boy : public person
{
public:
    void show()
    {
        cout << "Brown Bun\n";
    }
};
class girl : public person
{
public:
    void show()
    {
        cout << "Pink Bun\n";
    }
};
int main()
{
    person *b, *g;

    b = new boy();
    b->show();

    g = new girl();
    g->show();
    return 0;
}