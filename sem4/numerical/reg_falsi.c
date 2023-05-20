#include <stdio.h>
#include <math.h>
// #define f(x) x *x *x - 2 * x + 1
// #define f(x) x *x *x *x *x - 2
// #define f(x) x * 0.4343 * log(x) - 1.2
#define f(x) cos(x) - x *exp(x)

void main()
{
    double a, b, s, x, y;
    printf("Enter a(-ve interval) and b(+ve interval):\n");
    scanf("%lf%lf", &a, &b);
    if (f(a) * f(b) >= 0)
    {
        printf("Intervals are not valid!\n");
        return;
    }
    for (int i = 0; i < 10; i++)
    {
        x = f(a);
        y = f(b);
        s = ((a * y) - (b * x)) / (y - x);
        if (f(s) < 0)
            a = s;
        else
            b = s;
    }
    printf("Root = %lf\n", s);
}