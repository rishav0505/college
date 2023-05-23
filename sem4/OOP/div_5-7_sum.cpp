#include <iostream>
using namespace std;

void div(int n)
{
    if (n % 5 == 0 && n % 7 == 0)
        cout << "Divisible by 5 & 7";
    else
        cout << "Not divisible by 5 & 7";
}
void sum(int n)
{
    int r, s = 0, p = 1, nn = n;
    while (n > 0)
    {
        r = n % 10;
        s += r;
        p *= r;
        n /= 10;
    }
    if (s == p)
        cout << "\nprod of no. = sum of no.";
    else
        cout << "\nprod of no. not= sum of no.";
}
int main()
{
    int n;
    cout << "Enter n = ";
    cin >> n;
    div(n);
    sum(n);
    return 0;
}