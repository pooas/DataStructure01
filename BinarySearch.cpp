//
// Created by pooas on 4/6/2024.
//
#include <iostream>



int BinartSearch(int arr[], int lengthOfArray, int key)
{
    int mid, h, l;

    while(l <= h){

        mid = [(h+l)/2 ];

        if(arr[mid] == key)
            return mid;
        else if(key < arr[mid])
        {
            h = mid -1;
        }
        else
            l = mid +1;
    }

    return -1;

}

int main(){

    int arr[10]{3, 6, 12, 15, 33, 36,39,42, 45, 90};


    std::cout << BinartSearch(arr, 10, 12) << '\n';


    return 0;
}