/*WAP to implement a queue using linked list and perform the following: 1: insert an
element, 2: delete an element, 3: peek, 4: display the queue, 5: exit. You can take
user input based on the given choices.*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *front = NULL, *rear = NULL;

void insert(int value)
{
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    if (front == NULL)
        front = rear = newNode;
    else
    {
        rear->next = newNode;
        rear = newNode;
    }
}
void delete()
{
    if (front == NULL)
        printf("Queue Underflow!\n");
    else
    {
        struct Node *temp = front;
        front = front->next;
        free(temp);
    }
}
void peek()
{
    if ((front != NULL) && (rear != NULL))
        printf("Front->%d\n", front->data);
    else
        printf("Queue Underflow!\n");
}
void display()
{
    if (front == NULL)
        printf("Queue Underflow!\n");
    else
    {
        struct Node *temp = front;
        while (temp->next != NULL)
        {
            printf("%d->", temp->data);
            temp = temp->next;
        }
        printf("%d->NULL\n", temp->data);
    }
}
void main()
{
    int choice, value;
    printf("\n1.Insert \n2.Delete \n3.Peek \n4.Display\n5.Exit.\n");
    while (1)
    {
        printf("Enter choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value: ");
            scanf("%d", &value);
            insert(value);
            break;
        case 2:
            delete ();
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
            printf("Wrong selection!\n");
        }
    }
}
/*
Output:

1.Insert 
2.Delete
3.Peek
4.Display
5.Exit.

Enter choice : 1
Enter the value: 1
Enter choice : 1
Enter the value: 2
Enter choice : 1
Enter the value: 3
Enter choice : 1
Enter the value: 4
Enter choice : 3
Front->1
Enter choice : 4
1->2->3->4->NULL
Enter choice : 2
Enter choice : 2
Enter choice : 2
Enter choice : 2
Enter choice : 2
Queue Underflow!
Enter choice : 5
*/
