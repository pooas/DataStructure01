//
// Created by pooas on 4/6/2024.
//

#include <iostream>

int RBinarySearch(int l,int h,int key)
{
    int mid,h,l;

    l=0;

    int arr[];
    mid = (h + l) /2;

    if (l<=h)
    {
        mid = (l+h) /2;
        if(key == arr[mid])
            return mid;
        else if(key < arr[mid])
            return RBinarySearch(l, mid-1, key);
    }
}

int main(){

    return 0;
}