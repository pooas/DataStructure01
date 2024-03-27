//
// Created by pooas on 3/27/2024.
//
#include <iostream>
double fact(int n)
{
    if (n == 0)
        return 1;
    if(n > 0)
        return fact(n-1)*n;
}

double nCr(int n, int r)
{
    double dem, num;
    dem = fact(n);
    num = fact(r)* fact(n-r);
    return dem/num;
}

int main()
{

    std::cout << nCr(4, 2);
    return 0;
}