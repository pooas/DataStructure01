//
// Created by pooas on 4/28/2024.
//
#include <iostream>
#include "stdio.h"
#include "stdlib.h"



struct Array{
    int A[10];
    int size;
    int length;
};


void display(struct Array arr)
{
    printf("\n elements of the array \n :");
    for (int i = 0; i < arr.length; ++i) {
        printf("%d", arr.A[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y= temp;
}

void reversV1(Array *arr)
{
    int *revArr;
    revArr = (int *) malloc((arr->length)*(sizeof(int)));
    int i,j;
    for (i = arr->length-1, j =0; i >= 0 ; --i, ++j) 
        revArr[j] = arr->A[i];
    for (i = 0; i < arr->length ; i++) {
        arr->A[i] = revArr[i];
    }
}

void reversV2(Array *arr)
{
    int i,j;
    for (i= arr->length-1, j=0; i > j ; ++i, --j) {
        swap(&arr->A[i], &arr->A[j]);
    }
}

void append(Array *arr, int x)
{
    if(arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(Array *arr, int x, int index)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index ; --i) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[index] = x;
        arr->length++;
    }
}

int Delete(Array *arr, int index)
{
    int x=0;
    if (index >= 0 && arr->length >= index)
    {
        for (int i = index; i < arr->length-1 ; ++i) {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

int linearSearch(Array *arr, int key){}

int main(){

    Array arr = {{1,3,6,9,12,15,18}, 10, 7};

    reversV1(&arr);

    for (int i = 0; i < arr.length; ++i) {
        std::cout << arr.A[i] << '\n';
    }
    return 0;
}