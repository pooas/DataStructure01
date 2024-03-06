#include <iostream>

//A(Creat Array in Heap...)


int main(){
    std::cout << "Please write your specific array length \n";

    //A
    int* p;
    p = (int *) malloc(4 * sizeof(int));
    p[0]=3, p[1]=6, p[2]=12, p[3]=15;
    for (int i = 0; i < 4; ++i) {
        std::cout << p[i] << std::endl;
    }

    int Array[4]{3,6,9};

    std::cout << sizeof(Array) << "\n";
    printf("%d\n", Array[0]);
    std::cout << Array[3] << "\n";

    return 0;
}