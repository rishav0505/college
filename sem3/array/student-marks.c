/*2) WAP to read a 2D array marks which stores the marks of 5 students in three subjects. Also, write program to display the highest marks in each subject.*/

#include <stdio.h>

void main()
{
    int stu[5][3] = {0}, i, j;
    float a[5][3], max[3] = {-1, -1, -1};
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter the marks of student %d :\n", i + 1);
        for (j = 0; j < 3; j++)
        {
            printf("In subject %d : ", j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            if (a[j][i] >= max[i])
                max[i] = a[j][i];

    for (i = 0; i < 3; i++)
        for (j = 0; j < 5; j++)
            if (max[i] == a[j][i])
                stu[j][i] = 1;
                
    for (i = 0; i < 3; i++)
    {
        printf("Highest marks in subject %d = %.2f -- scored by student", i + 1, max[i]);
        for (j = 0; j < 5; j++)
            if (stu[j][i])
                printf(" %d,", j + 1);
        printf("\n");
    }
} 
