//
// Created by pooas on 3/22/2024.
//

#include <iostream>

int funNest(int n)
{
    if( n > 100)
        return n-10;

    return (funNest(n+11));
}

int main(){
    int r;
    r=funNest(99);
    std::cout << r << "\n";
    return 0;
}