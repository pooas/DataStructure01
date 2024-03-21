//
// Created by pooas on 3/21/2024.
//

#include <iostream>
void funB(int n);

void funA(int n){

    if(n > 0){

        std::cout << n << "\n";
        funB(n-1);

    }
}


void funB(int n){
    if(n >1){
        std::cout << n << '\n';
        funA(n/2);
    }
}

int main(){

    funB(100);
    return 0;
}