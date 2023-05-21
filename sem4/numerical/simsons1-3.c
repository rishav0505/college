#include <stdio.h>
#include <math.h>
#define E 2.7182818
#define f(x) pow(E, (sqrt(x) / 2))
// limit [1 to 2]
void main()
{
    int n = 4;
    float h, x[n + 1], y[n + 1], l1 = 1, l2 = 2, s = 0.0, s4 = 0.0, s2 = 0.0;
    h = (l2 - l1) / n;
    printf("%f\n", h);
    for (int i = 0; i < n + 1; i++)
    {
        x[i] = s + l1;
        y[i] = f(x[i]);
        s += h;
    }
    s = (y[0] + y[n]);
    for (int i = 1; i < n; i++)
    {
        if (i % 2 == 0)
            s2 += y[i];
        else
            s4 = s4 + y[i];
    }
    s = (s + (4 * s4) + (2 * s2)) * h / 3.0;
    printf("Ans = %f", s);
}
