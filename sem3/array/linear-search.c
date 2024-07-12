/*1) WAP to search an element in an array using Linear search and tell whether it is smallest element or not.*/
 
#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int len, int key)
{
    for (int i = 0; i < len; i++, arr++)
        if (*arr == key)
            return 1;
    return 0;
}

int min(int *arr, int len)
{
    int min = *arr;
    arr++;
    for (int i = 1; i < len; i++, arr++)
        if (*arr < min)
            min = *arr;
    return min;
}

int main()
{
    int len, key, *arr;
    printf("Enter the length of the array: ");
    scanf("%d", &len);
    arr = (int *)malloc(sizeof(int) * len);
    printf("Enter %d integers for the array:\n", len);
    for (int i = 0; i < len; i++)
        scanf("%d", arr + i);
    printf("enter the key to search for: ");
    scanf("%d", &key);
    if (linearSearch(arr, len, key))
        if (min(arr, len) == key)
            printf("%d found in the array and it is the smallest element\n", key);
        else
            printf("%d found in the array but it isn't the smallest element\n", key);
    else
        printf("%d not found in the array!\n", key);
} 
