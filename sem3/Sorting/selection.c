// WAP to sort an array using selection sort.

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int array[], int size)
{
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
        {
            if (array[i] < array[min_idx])
                min_idx = i;
        }
        swap(&array[min_idx], &array[step]);
    }
}
void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d  ", array[i]);
    printf("\n");
}
int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: \n");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    selectionSort(arr, size);
    printf("Sorted array in Acsending Order:\n");
    printArray(arr, size);
}
/*
Output:

Enter the size: 4
Enter the elements of array:
5 4 7 2
Sorted array in Acsending Order:
2  4  5  7
*/
