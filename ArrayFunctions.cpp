//
// Created by pooas on 4/13/2024.
//
#include <iostream>

class Array{

public:

    void Display(int arr[])
    {
        int lenght = sizeof(arr)/ sizeof(arr[0]);
        for (int i = 0; i < lenght; ++i) {
            std::cout << arr[i] << '\n';

        }
    }

};

int main()
{

    return 0;
}