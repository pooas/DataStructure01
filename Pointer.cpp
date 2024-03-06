#include<iostream>

struct ab{
     char a;
    float b;
};

int main(){
    char * a;
    char* b;
    char* c;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(b) << std::endl;
    std::cout << sizeof(c) << std::endl;
    std::cout << sizeof(ab) << std::endl;

    return 0;
}