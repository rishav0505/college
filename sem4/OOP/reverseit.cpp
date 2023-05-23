#include <iostream>
#include <cstring>
using namespace std;

void reverseit(char c[])
{
    int l = strlen(c);
    for (int i = 0; i < l / 2; i++)
    {
        char c1;
        c1 = c[l - 1 - i];
        c[l - 1 - i] = c[i];
        c[i] = c1;
    }
}
int main()
{
    int M = 100;
    char c[M];
    cout << "Enter a string: ";
    cin.getline(c, M);
    reverseit(c);
    cout << "Reversed String: " << c << "\n";
    return 0;
}