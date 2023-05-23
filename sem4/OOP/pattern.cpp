#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > n - i - 2)
                cout << " * ";
            else
                cout << "   ";
        }
        cout << i + 1 << "\n";
    }
    return 0;
}