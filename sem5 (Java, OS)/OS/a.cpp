#include <stdio.h>
#include <ctype.h>
#define EOF -1

void push(int);
int pop();
void flagError();
int main()
{
    int c, m, n, r;

    while ((c = getchar()) != EOF)
    {
        // if (isdigit(c))
        //     push(c);
        // else if ((c == '+') || (c == '*'))
        // {
        //     m = pop();
        //     n = pop();
        //     r = (c == '+') ? n + m : n * m;
        //     push(r);
        // }
        // else if (c != ' ')
        //     flagError();
    }
    printf("%c", pop());
}