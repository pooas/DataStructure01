#include<iostream>

struct rec{
    int len;
    int bread;
    char name;
};

int main(){

    rec r1{1,2,'c'};

    std::cout << r1.len << '\n';

    rec* ptr = &r1;

    std::cout << r1.len << '\n';

    std::cout << sizeof(r1) << "\n";
    return 0;
}