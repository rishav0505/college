#include <stdio.h>
// x 3 5 7 9
// y 180 150 120 90
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
void main()
{
    int a[4][4], b[4] = {3, 5, 7, 9}, c[] = {180, 150, 120, 90};
    for (int i = 0; i < 4; i++)
        a[i][0] = c[i];

    for (int j = 1; j < 4; j++)
        for (int i = 0; i < 4 - j; i++)
            a[i][j] = a[i + 1][j - 1] - a[i][j - 1];

    printf("Table:\n");
    for (int j = 0; j < 4; j++)
    {
        printf("%12d", b[j]);
        for (int i = 0; i < 4 - j; i++)
            printf("%12d", a[j][i]);
        printf("\n");
    }
    
    int x = 4, h = b[1] - b[0], a1 = b[0];
    float u = (float)(x - a1) / h;
    float s = 0.0, u1 = 1.0;
    for (int i = 0; i < 4; i++)
    {
        u1=1.0;
        for (int j = 0; j < i; j++)
            u1 *= (u - j);
        s += ((a[0][i] * u1) / fact(i));
    }
    printf("f(%d) = %f", x, s);
}