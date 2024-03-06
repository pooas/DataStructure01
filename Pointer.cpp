#include<iostream>

struct ab{
     char a;
    float b;
};

int main(){
    //The size of pointer is independent of size of data types
    int * a;
    float* b;
    char* c;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;
    std::cout << sizeof(c) << std::endl;
    std::cout << sizeof(ab) << std::endl;

    return 0;
}