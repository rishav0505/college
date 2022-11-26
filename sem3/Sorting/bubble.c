// WAP to sort an array of elements using bubble sort.

#include <stdio.h>

void bubbleSort(int array[], int size)
{
    for (int step = 0; step < size - 1; ++step)
    {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; ++i)
        {
            if (array[i] > array[i + 1])
            {
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0)
            break;
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
    bubbleSort(arr, size);
    printf("Sorted Array in Ascending Order:\n");
    printArray(arr, size);
}
/*
Output:

Enter the size: 4
Enter the elements of array:
5 3 9 2
Sorted Array in Ascending Order:
2  3  5  9
*/
