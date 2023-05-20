#include <stdio.h>
#define MAX 100
int r1, c1, r2, c2;
int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
void matmul();
void matadd();

void main()
{
    printf("Enter no. of row's & column's of 1st matrix:\n");
    scanf("%d%d", &r1, &c1);
    printf("Enter no. of row's & column's of 2nd matrix:\n");
    scanf("%d%d", &r2, &c2);
    printf("Enter elements of 1st matrix\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);
    printf("Enter elements of 2nd matrix\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);
    matmul();
    matadd();
}
void matmul()
{
    if (c1 == r2)
    {
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c2; j++)
                c[i][j] = 0;
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c2; j++)
            {
                c[i][j] = 0;
                for (int k = 0; k < c1; k++)
                    c[i][j] += a[i][k] * b[k][j];
            }
        printf("Matrix Multiplication:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
                printf("%5d", c[i][j]);
            printf("\n");
        }
    }
    else
        printf("1st matrix no. of column's & 2nd matrix no. of row's not equal!\n");
}
void matadd()
{
    if (r1 == r2 && c1 == c2)
    {
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                c[i][j] = a[i][j] + b[i][j];
        printf("Matrix Addition:\n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)

                printf("%5d", c[i][j]);
            printf("\n");
        }
    }
    else
        printf("Matrix dimentions not same!\n");
}