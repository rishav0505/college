#include <stdio.h>
#define MAX 100
int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
int main()
{
    int r, cc;
    printf("Enter no. of row's & column's of matrix:\n");
    scanf("%d%d", &r, &cc);
    if (r != cc)
    {
        printf("It's not square matrix!\n");
        return 0;
    }
    printf("Enter elements of matrix\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < cc; j++)
            scanf("%d", &a[i][j]);
    for (int i = 0; i < r; i++)
        for (int j = 0; j < cc; j++)
        {
            if (i < j)
                b[i][j] = 0;
            else
                b[i][j] = a[i][j];
            if (i > j)
                c[i][j] = 0;
            else
                c[i][j] = a[i][j];
        }
    printf("Orignal Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cc; j++)
            printf("%3d", a[i][j]);
        printf("\n");
    }
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cc; j++)
            printf("%3d", c[i][j]);
        printf("\n");
    }
    printf("Lower Triangular Matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < cc; j++)
            printf("%3d", b[i][j]);
        printf("\n");
    }
    return 0;
}