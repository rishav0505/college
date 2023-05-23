#include <iostream>
using namespace std;

class stack
{
    struct node
    {
        int n;
        struct node *link;
    } *head = NULL;
public:
    void push(int n)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node)), *ptr = head;
        temp->n = n;
        temp->link = NULL;
        if (head == NULL)
        {
            head = temp;
            return;
        }
        while (ptr->link != NULL)
            ptr = ptr->link;
        ptr->link = temp;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "Stack Underflow!\n";
            return;
        }
        struct node *ptr = head;
        if (head->link == NULL)
        {
            head = NULL;
            return;
        }

        while (ptr->link->link != NULL)
            ptr = ptr->link;
        ptr->link = NULL;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "Stack is Empty!\n";
            return;
        }
        struct node *ptr = head;
        while (ptr != NULL)
        {
            cout << ptr->n << " -> ";
            ptr = ptr->link;
        }
        cout << "NULL\n";
    }
};

int main()
{
    stack a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);
    a.display();

    a.pop();
    a.pop();
    a.display();

    a.pop();
    a.pop();
    a.display();
    return 0;
}