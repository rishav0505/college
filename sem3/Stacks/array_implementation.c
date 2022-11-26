// WAP to create a stack using array and perform push, pop operations.
#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push()
{
    if (top >= n - 1)
        printf("STACK is over flow\n");
    else
    {
        printf("Enter a value: ");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}
void pop()
{
    if (top <= -1)
        printf("Stack is under flow!\n");
    else
        top--;
}
void display()
{
    if (top >= 0)
    {
        printf("The elements in STACK: \n");
        printf("%d <- TOP\n", stack[top]);
        for (i = top - 1; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
    else
        printf("The STACK is empty!\n");
}
int main()
{
    top = -1;
    printf("Enter the size of STACK: ");
    scanf("%d", &n);
    printf("MENU\n");
    printf(" 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
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
            printf("Please Enter a Valid Choice(1/2/3/4)\n");
        }
    } while (choice != 4);
}
/*
Output:

Enter the size of STACK: 3
MENU
 1.PUSH
 2.POP
 3.DISPLAY
 4.EXIT
Enter the Choice: 1
Enter a value: 1
Enter the Choice: 1
Enter a value: 2
Enter the Choice: 1
Enter a value: 3
Enter the Choice: 1
STACK is over flow
Enter the Choice: 3
The elements in STACK:
3 <- TOP
2
1
Enter the Choice: 2
Enter the Choice: 2
Enter the Choice: 2
Enter the Choice: 2
Stack is under flow!
Enter the Choice: 4
Exiting the program.
*/
