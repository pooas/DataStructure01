#include <iostream>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){

    int a{10};
    int b{20};

    swap(&a,&b);

    // If we pass by Value, The result is a = 10 , b = 20 swap function seems not working well.
    // But, if we pass by reference function working well.
    std::cout << a << "   " << b << '\n';





    return 0;
}