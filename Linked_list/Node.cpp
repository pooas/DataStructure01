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

void RDiplay(struct Node *p)
{
    while(p->next!=NULL)
    {
        printf("%d", p->data);
        RDiplay(p->next);
    }


}

int count(struct Node* p)
{

    int l = 0;
    while(p){
        l++;
        p->next;
    }
    return l;
}

int sum(struct Node *p)
{
    int s =0;
    while(p!=NULL)
    {
        s +=p->data;
        p = p->next;
    }
    return s;
}

int RSum(struct Node *p)
{
    if(p==NULL)
        return 0;
    else
        return RSum(p->next) + p->data;
}

int main()
{

    int A[] = {12, 15, 18, 21, 24,27};
    creat(A,6);
    printf("Count %d\n", count(first));
    printf("Count %d", RSum(first));
//    int A[] = {12, 16, 27, 6, 9, 24, 33, 66};
//    creat(A, 8);
//    display(first);
//    RDiplay(first);

    return 0;
}