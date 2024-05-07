//
// Created by pooas on 4/15/2024.
//

#include <stdio.h>
#include <stdlib.h>


struct Arry{
    int *A;
    int size;
    int length;
};

void Display(struct Arry arr)
{
    printf("\n nElement are ...: \n");
    for(int i=0; i < arr.length; i++){
        printf("%d",arr.A[i]);
    }
}

void appendItem(struct Arry *arr, int item)
{
    if (arr->length < 0)
        printf("%s" "you cannot append items due to limition of array list");
    else if (arr->length < arr->size)
        arr->A[arr->length] = item;
}

void insertItem(struct Arry *arr, int locItem, int item)
{
    if(locItem > 0 && locItem < arr->length)
    {
        for (int i = arr->length; i > locItem ; i--) {
            arr->A[i] = arr->A[i-1];
        }
        arr->A[locItem] = item;
        arr->length++;

    }
}






int main(){

    return 0;
}