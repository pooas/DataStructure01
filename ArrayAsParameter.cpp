//
// Created by pooas on 3/11/2024.
//
#include <iostream>

int * Fun(int n)
{
    int * p;
    p = (int *) malloc(n* sizeof (int));

    return p;
}

struct Rec{
    int height;
    int weidth;
};

Rec *recFun()
{
    Rec *ptr;
    ptr = new Rec;

    ptr->height = 9;
    ptr->weidth = 33;

    return ptr;
}

int main(){

    int * ptr;
    ptr= Fun(5);
    ptr[1] = 100;
    ptr[2] = 330;

    std::cout << ptr[1] << " " << ptr[2] << '\n';

    Rec *ptrRec = recFun();

    std::cout << ptrRec->weidth  << '\n';



    return 0;
}