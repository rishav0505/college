#include <stdio.h>
void main()
{
    int r, c, s = 0, rr;
    printf("Enter no. of row's & column's of matrix:\n");
    scanf("%d%d", &r, &c);
    rr = r;
    int a[r][c];
    if (r != c)
    {
        printf("It's not square matrix!\n");
        return;
    }
    printf("Enter elements of matrix\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (j == (rr - 1))
            {
                rr--;
                s += a[i][j];
            }
    printf("Sum of diagonal = %d", s);
}