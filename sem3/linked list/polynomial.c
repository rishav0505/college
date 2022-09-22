//#include "singly-linked.h"

#include <stdio.h>
#include <stdlib.h>

// adds data in corresponding nodes of the two linked lists to give the sum of the polynomial
list *add(list *l1, list *l2)
{
    list *sum = createEmptyList();
    node *op1, *op2;

    op1 = l1->head;
    op2 = l2->head;

    while (op1 || op2)
    {
        int dsum = 0;
        dsum += (op1) ? op1->data : 0;
        dsum += (op2) ? op2->data : 0;

        node *degreeSum = createNewNode(dsum);
        append(sum, degreeSum);

        if (op1)
            op1 = op1->next;
        if (op2)
            op2 = op2->next;
    }

    return sum;
}

// accepts a polynomial from the user
list *getPolynomial()
{
    list *polynomial = createEmptyList();
    int degree = 0;

    printf("enter the highest degree of the polynomial: ");
    scanf("%d", &degree);

    printf("enter the coefficients in ascending order of degree."
           "example usage: for [9 + 8x + (0x^2) + 36x^3], write 9 8 0 36 and press enter: \n->");

    for (int i = 0; i <= degree; i++)
    {
        int coeff = 0;
        scanf("%d", &coeff);
        node *term = createNewNode(coeff);
        append(polynomial, term);
    }

    return polynomial;
}

// prints out the polynomial
void printPolynomial(list *polynomial)
{
    if (!polynomial)
    {
        fprintf(stderr, "passed polynomial is null!\n");
        return;
    }
    node *term = polynomial->head;
    int degree = 0;

    while (term)
    {
        printf("%d x^%d", term->data, degree++);
        if (term->next)
            printf(" + ");
        term = term->next;
    }

    printf("\n");
}

void main()
{
    printf("what's the first polynomial?\n");
    list *p1 = getPolynomial();
    printf("what's the second polynomial?\n");
    list *p2 = getPolynomial();

    list *sum = add(p1, p2);
    printf("the sum is: ");
    printPolynomial(sum);
}
