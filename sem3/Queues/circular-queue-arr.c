/*WAP to implement circular queue and perform the following: 1: insert an element,
2: delete an element, 3: peek, 4: display the queue, 5: exit. You can take user input
based on the given choices*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int cQueue[SIZE], front = -1, rear = -1;

void enQueue(int value)
{
    if ((front == 0 && rear == SIZE - 1) || (front == rear + 1))
        printf("Circular Queue Underflow!\n");
    else
    {
        if (rear == SIZE - 1 && front != 0)
            rear = -1;
        cQueue[++rear] = value;
        if (front == -1)
            front = 0;
    }
}
void deQueue()
{
    if (front == -1 && rear == -1)
        printf("Circular Queue Underflow!\n");
    else
    {
        if (front == SIZE)
            front = 0;
        if (front - 1 == rear)
            front = rear = -1;
    }
}
void peek()
{
    printf("Front->%d\n", cQueue[front]);
}
void display()
{
    if (front == -1)
        printf("Circular Queue is Empty!\n");
    else
    {
        int i = front;
        printf("Circular Queue Elements are : \n");
        if (front <= rear)
        {
            while (i <= rear)
                printf("%d\n", cQueue[i++]);
        }
        else
        {
            while (i <= SIZE - 1)
                printf("%d\t", cQueue[i++]);
            i = 0;
            while (i <= rear)
                printf("%d\t", cQueue[i++]);
        }
    }
}
void main()
{
    int choice, value;
    printf("\n1.Insert \n2.Delete \n3.Peek \n4.Display\n5.Exit.\n");
    while (1)
    {
        printf("Enter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &value);
            enQueue(value);
            break;
        case 2:
            deQueue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice!\n");
        }
    }
}
/*
1.Insert
2.Delete
3.Peek
4.Display
5.Exit.

Enter choice: 1
Enter the value: 1
Enter choice: 1
Enter the value: 2
Enter choice: 1
Enter the value: 3
Enter choice: 3
Front->1
Enter choice: 4
Circular Queue Elements are :
1
2
3
Enter choice: 5
*/
