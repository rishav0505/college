/*4) WAP to fill a square matrix with value 0(zero) on the diagonals, value 1 on the upper right triangle and value -1 on the lower left triangle.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void makeItQuirky(int *arr, int dim)
{
    for (int i = 0; i < dim; i++)
        for (int j = 0; j < dim; j++)
            if (i > j)
                *(arr + i * dim + j) = -1;
            else if (i < j)
                *(arr + i * dim + j) = 1;
}
void printMatrix(int *arr, int dim)
{
    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; j++)
            printf("%2d ", *(arr + dim * i + j));
        printf("\n");
    }
}
void main()
{
    int dim, *arr;
    printf("Enter the dimension of the square matrix: ");
    scanf("%d", &dim);
    arr = (int *)malloc(sizeof(int) * dim * dim);
    memset(arr, 0, sizeof(*arr));
    makeItQuirky(arr, dim);
    printMatrix(arr, dim);
}
