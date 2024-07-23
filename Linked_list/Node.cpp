//
// Created by pooas on 7/21/2024.
//

#include <stdlib.h>
#include <stdio.h>
#include <iostream>



struct Node
{
    int data;
    Node *next;
}*first= nullptr;

void creat(int A[], int n)
{
    Node *t, *last;

    first = (struct Node*) malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = nullptr;
    last = first->next;

    for (int i = 1; i < n; ++i)
    {
        t = (struct Node*) malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = nullptr;
        last->next=t;
        last=t;
    }
}

void display(struct Node *node)
{
    struct Node *p;

    while (node != nullptr)
    {
        printf("%d", node->data);
        node = node->next;
    }
}


int main()
{
    struct Node* p;
    int A[] = {12, 16, 27, 6, 9, 24, 33, 66};
    creat(A, 8);
    display(first);

    return 0;
}