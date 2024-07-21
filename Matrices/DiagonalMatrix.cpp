//
// Created by pooas on 6/26/2024.
//


#include <stdio.h>
#include <iostream>

//struct Matrix
//{
//    int A[10];
//    int n;
//};
//
//void Set(struct Matrix *m, int i, int j, int x)
//{
//    if(i == j)
//        m->A[i-1] = x;
//}
//
//int Get(struct Matrix *m, int i, int j)
//{
//    if(i == j)
//        return m->A[i-1];
//    else
//        return 0;
//}
//
//void Display(struct Matrix m)
//{
//    int i,j;
//
//    for (int i = 0; i < m.n; ++i)
//        for (int j = 0; j < m.n; ++j) {
//            if(i == j)
//                printf("%i", m.A[i-1]);
//            else
//                printf(" 0 ");
//        }
//    printf("\n");
//}

struct Matrix
{
    int A[10];
    int n;
};

void Set(struct Matrix *m, int i, int j, int x)
{
    if(i == j)
        m->A[i-1] = x;
}

int Get(struct Matrix *m, int i, int j) {
    if (i == j)
        return m->A[i-1];
    else
        return 0;
        std::cout << "the number of i and j are not same, Please pass same i and j ...!" << std::endl;
}

int Display(struct Matrix m)
{
    for (int i = 0; i < m.n; ++i) {


        for (int k = 0; k < m.n; ++k) {
            if (i == k)
                printf("%d", m.A[i]);
            else
                printf("0 ");

        }
        printf("\n");
    }
}

int main()
{
    Matrix m;
    m.n = 4;

    Set(&m, 1,1,5);
    Set(&m,2,2,3);
    Set(&m, 3,3,6);
    Set(&m, 4,4,12);


//    printf("%d \n", Get(&m,2,2));

    Display(m);
    return 0;
}