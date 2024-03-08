#include<stdio.h>

void reverse_array(int* arr , int size){
    int temp;
    for(int i = 0 ; i <= size / 2 ; i++){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

void main(void){
    int  arr[100];
    int size ; 
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    reverse_array(arr , size);
    for(int i = 0 ; i < size ; i++){
    printf("%d ",arr[i]);
   }
}