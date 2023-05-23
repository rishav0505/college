#include <iostream>
using namespace std;

class vector
{
    int u, v;

public:
    vector(int uu = 0, int vv = 0)
    {
        u = uu;
        v = vv;
    }
    vector operator*(int n)
    {
        return vector(u * n, v * n);
    }
    vector operator+(vector w)
    {
        return vector(u + w.u, v + w.v);
    }
    void display()
    {
        cout << "\n( " << u << " , " << v << " )";
    }
};
int main()
{
    vector v1(6, 2), v2;
    v2 = v1 * 5;
    v2.display();
    vector v3(5, 6), v4(10, 10), v5;
    v5 = v3 + v4;
    v5.display();
    return 0;
}