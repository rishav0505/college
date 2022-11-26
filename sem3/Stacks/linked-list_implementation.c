// WAP to implement stack using linked list and perform push, pop operations.
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void push()
{
    int x;
    printf("Enter a value: ");
    scanf("%d", &x);
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = x;
    newNode->next = head;
    head = newNode;
}

void pop()
{
    struct node *temp;
    if (head == NULL)
        printf("Stack is under flow!\n");
    else
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

void display()
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    int choice;
    printf("MENU\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
    do
    {
        printf("Enter the Choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Exiting the program.\n");
            break;
        default:
            printf("Invalid Choice!\n");
        }
    } while (choice != 4);
}
