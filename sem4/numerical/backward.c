#include <stdio.h>
#include <stdlib.h>

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
void main()
{
    float x[] = {24, 28, 32, 36, 40}, y[] = {28.06, 30.19, 32.75, 34.94, 40}, a[5][5];
    for (int i = 0; i < 5; i++)
        a[i][0] = y[i];

    for (int j = 1; j < 5; j++)
        for (int i = 0; i < 5 - j; i++)
            a[i][j] = a[i + 1][j - 1] - a[i][j - 1];

    printf("Table:\n");
    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 5 - j; i++)
            printf("%12.2f", a[j][i]);
        printf("\n");
    }
    
    float x1 = 33.0, a1 = x[4], h = (float)x[1] - x[0], u, u1 = 1.0;
    double s = 0.0;
    u = (x1 - a1) / h;
    for (int i = 0, k = 4; i < 5; i++, k--)
    {
        u1 = 1.0;
        for (int j = 0; j < i; j++)
            u1 *= (u + j);
        s += ((u1 * a[k][i]) / fact(i));
    }
    printf("f(%.0f) = %lf", x1, s);
}