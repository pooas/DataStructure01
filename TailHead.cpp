//
// Created by pooas on 3/17/2024.
//
#include<iostream>

void fun(int n)
{
    if(n > 0){
        fun(n-1);
        std::cout << n << '\n';

    }
}

int main(){

    int k{10};
    fun(k);
    return 0;
}