#include <stdio.h>
#include <math.h>
#define f(x) 1 / sqrt(1 + x * x)
// limit [0 to 1]
void main()
{
    int n = 5;
    float h, x[n + 1], y[n + 1], l1 = 0, l2 = 1, s = 0.0;
    h = (l2 - l1) / n;
    for (int i = 0; i < n + 1; i++)
    {
        x[i] = s + l1;
        y[i] = f(x[i]);
        s += h;
    }
    s = (y[0] + y[n]) / 2;
    for (int i = 1; i < n; i++)
        s += y[i];
    printf("Ans = %f", s * h);
}
