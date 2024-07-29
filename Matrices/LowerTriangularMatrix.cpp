//
// Created by pooas on 7/20/2024.
//
#include <iostream>
#include <stdlib.h>

struct Matrix
{
    int *A;
    int n;
};

void set(struct Matrix *m, int i, int j, int x)
{
    if(i >=j)
        m->A[i*(i-1)/2+j-1]= x;
}

int get(Matrix *m, int i, int j)
{
    if(i>=j)
        return m->A[i*(i-1)/2+j-2];
    else
        return 0;
}

void Display(Matrix m)
{
    for (int i = 1; i < m.n; ++i) {
        for (int j = 1; j < m.n; ++j) {
            if(i>=j)
                printf("%d ", m.A[i*(i-1)/2+j-1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}


int main()
{
    struct Matrix m;
    int x;
    printf("Enter dimention  :  ");
    scanf("%d", &m.n);

    m.A = (int *)malloc(m.n*(m.n-1)/2*sizeof(int));

    printf("enter all elements");
    for (int i = 1; i <= m.n ; ++i) {
        for (int j = 1; j <= m.n ; ++j) {
            scanf("%d", &x);
            set(&m,i,j,x);
        }
    }

    printf("\n\n");
    Display(m);
    return 0;
}