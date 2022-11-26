/*WAP to implement a linear queue using array and perform the following: 1: insert
an element, 2: delete an element, 3: peek, 4: display the queue, 5: exit. You can take
user input based on the given choices*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    int queue[n], ch = 1, front = 0, rear = 0, i, j = 1, x = n;
    printf("\n1.Insert \n2.Delete \n3.Peek \n4.Display\n5.Exit.\n");
    while (ch)
    {
        printf("Enter the Choice : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            if (rear == x)
                printf("Queue Overflow!\n");
            else
            {
                printf("Enter no. %d : ", j++);
                scanf("%d", &queue[rear++]);
            }
            break;
        case 2:
            if (front == rear)
                printf("Queue Underflow!\n");
            else
                x++;
            break;
        case 3:
            printf("Front->%d\n", queue[front]);
            break;
        case 4:
            printf("Queue Elements are : \n ");
            if (front == rear)
                printf("Queue is Empty!");
            else
            {
                for (i = front; i < rear; i++)
                {
                    printf("%d", queue[i]);
                    printf("\n");
                }
                break;
            }
        case 5:
            exit(0);
        default:
            printf("Wrong Choice!");
        }
    }
}
/*
Output:

Enter the size : 3

1.Insert
2.Delete
3.Peek
4.Display
5.Exit.

Enter the Choice : 1
Enter no. 1 : 1
Enter the Choice : 1
Enter no. 2 : 2
Enter the Choice : 1
Enter no. 3 : 3
Enter the Choice : 1
Queue Overflow!
Enter the Choice : 3
Front->1
Enter the Choice : 4
Queue Elements are :
1
2
3
Enter the Choice : 2
Enter the Choice : 2
Enter the Choice : 2
Enter the Choice : 2
Queue Underflow!
Enter the Choice : 5
*/
