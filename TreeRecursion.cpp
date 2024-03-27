//
// Created by pooas on 3/21/2024.
//
#include <iostream>

void funOfTree(int n){

    if(n > 0){

        std::cout << n ;
        funOfTree(n-1);
        funOfTree(n-1);
    }
}


int main(){

    funOfTree(100);

    return 0;
}