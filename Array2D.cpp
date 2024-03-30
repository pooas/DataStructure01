//
// Created by pooas on 3/30/2024.
//

#include <iostream>

int main()
{
    //The First way to creat 2D Array in Stack

    int A[3][4] = {{1,2,3,4},{5,6,7,8,},{9,10,11,12}};


    //The Second way of creating Array partially in Heap and Stack

    int *B[3];
    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
            std::cout << A[i][j] << "\n";

        std::cout << "\n";

    }

    //The Third way of creating Array fully in Heap

    int **C;

    C = new int*[3];
    C[0] = new int[4];
    C[1] = new int[4];
    C[2] = new int[4];
    C[3] = new int[4];



    return  0;
}