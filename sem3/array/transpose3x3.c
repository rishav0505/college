/*3) WAP to transpose a 3X3 matrix.*/

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a[3][3];
    printf("Enter the values in the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    for (int i = 1; i < 3; i++)
        for (int j = 0; j < i; j++)
            swap(&a[i][j], &a[j][i]);
            
    printf("The transposed matrix is: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}    
