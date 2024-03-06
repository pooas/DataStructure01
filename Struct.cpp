#include<iostream>

struct rec{
    int len;
    int bread;
    char name;
};

int main(){

    rec r1{};
    std::cout << sizeof(r1) << "\n";
    return 0;
}