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

int main(){

    int * ptr;
    ptr= Fun(5);
    ptr[1] = 10;

    std::cout << ptr[1] << '\n';





    return 0;
}