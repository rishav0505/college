// WAP to sort an array using insertion sort.

#include <stdio.h>

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}
void insertionSort(int array[], int size)
{
    for (int step = 1; step < size; step++)
    {
        int key = array[step];
        int j = step - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
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
    insertionSort(arr, size);
    printf("Sorted array in ascending order:\n");
    printArray(arr, size);
}
/*
Output:

Enter the size: 4
Enter the elements of array:
5 3 7 9
Sorted array in ascending order:
3 5 7 9
*/
