#include <iostream>
//
//void swap(int *x, int *y)
//{
//    int temp;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//}
//
//int main(){
//
//    int a{10};
//    int b{20};
//
//    swap(&a,&b);
//
//    // If we pass by Value, The result is a = 10 , b = 20 swap function seems not working well.
//    // But, if we pass by reference function working well.
//    std::cout << a << "   " << b << '\n';
//
//
//
//
//
//    return 0;
//}

void swap(int &a, int &b)
{

    int c;
    c = a;
    a = b;
    b = c;
}

int main()
{
    int a = 12;
    int b =24;

    swap(a,b);

    std::cout << a << " " << b << std::endl;
}