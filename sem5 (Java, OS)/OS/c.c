#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a = 100;
    if (fork() == 0)
    {
        a = a + 5;
        printf("%d %d \n", a, &a);
    }
    else
    {
        a = a - 5;
        printf("%d %d \n", a, &a);
    }
}