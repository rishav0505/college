#include <iostream>
using namespace std;

class A
{
public:
    struct node
    {
        int n;
        struct node *link;
    };
    struct node *head = NULL;
    void insertBeg(int n)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->n = n;
        temp->link = head;
        head = temp;
    }
    void insertEnd(int n)
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
    void delPos(int n)
    {
        struct node *temp1, *temp2, *ptr = head;
        if (n == 0)
        {
            head = head->link;
            return;
        }
        while (--n)
            ptr = ptr->link;
        temp1 = ptr;
        temp2 = ptr->link->link;
        temp1->link = temp2;
    }
    void display()
    {
        if (head == NULL)
        {
            cout << "Linked list is empty!\n";
            return;
        }
        struct node *temp = head;
        while (temp != NULL)
        {
            cout << temp->n << " -> ";
            temp = temp->link;
        }
        cout << "NULL\n";
    }
};
int main()
{
    A a;
    a.insertBeg(5);
    a.insertBeg(6);
    a.insertEnd(7);
    a.insertBeg(3);
    a.display();

    a.delPos(0);
    a.display();
    return 0;
}