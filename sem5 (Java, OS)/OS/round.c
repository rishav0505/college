#include <stdio.h>

int main()
{
    int bt[10] = {4, 6, 2, 5}, bt2[10] = {4, 6, 2, 5}, wt[10] = {0}, ct[10] = {0};
    int n = 4, tq = 3, c = 0, x = 0;

    printf("Gantt Chart: ");
    for (int i = 0; i < n; i++)
    {
        if (bt[i] == 0)
            continue;
        if (bt[i] > tq)
        {
            c = c + tq;
            bt[i] = bt[i] - tq;
        }
        else
        {
            c = c + bt[i];
            ct[i] = c;
            bt[i] = 0;
        }
        printf("%d  ", c);
        if (i == n - 1)
            i = -1;
        x = 0;
        for (int j = 0; j < n; j++)
            x = x + bt[j];
        if (x == 0)
            break;
    }
    printf("\n\nTAT\tWT\n");

    for (int i = 0; i < n; i++)
    {
        wt[i] = ct[i] - bt2[i];
        printf("%d\t%d\n", ct[i], wt[i]);
    }
    return 0;
}