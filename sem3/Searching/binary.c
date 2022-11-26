// WAP to search an element in an array using Binary search

#include <stdio.h>

int binarySearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] > x)
            return binarySearch(array, x, low, mid - 1);
        return binarySearch(array, x, mid + 1, high);
    }
    return -1;
}

int main(void)
{
    int size, x;
    printf("Enter the size: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of array: ");
    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to be searched: ");
    scanf("%d", &x);
    int result = binarySearch(arr, x, 0, size - 1);
    if (result == -1)
        printf("Not found");
    else
        printf("Element found at index %d", result);
}
/*
Output:

Enter the size: 3
Enter the elements of array: 3 4 6
Enter the element to be searched: 4
Element found at index 1
*/
