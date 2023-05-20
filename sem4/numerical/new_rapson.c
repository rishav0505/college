#include <stdio.h>
#include <math.h>
#define f(x) x *x *x - 2 * x + 1
#define g(x) 3 * x *x - 2
// #define f(x) (x *sin(x)) - 1
// #define g(x) (x *cos(x)) + sin(x)

void main()
{
    double x, s, c, d;
    printf("Enter initial guess [a,b]:\n");
    scanf("%lf", &x);
    for (int i = 0; i < 20; i++)
    {
        c = f(x);
        d = g(x);
        if (d == 0)
        {
            printf("Mathemetical Error!\n");
            return;
        }
        x = x - (c / d);
    }
    printf("Root = %lf", x);
}