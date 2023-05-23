#include <iostream>
using namespace std;

class person
{
public:
    virtual void show()
    {
        cout << "Bun\n";
    }
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