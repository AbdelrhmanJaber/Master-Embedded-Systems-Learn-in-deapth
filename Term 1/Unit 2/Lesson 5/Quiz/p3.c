#include<stdio.h>

void reverse_array_in_place(int arr[] , int size){
    int temp , j = size-1;
    for(int i = 0 ; i < size/2 ; i++){
       temp = arr[i];
       arr[i] = arr[j-i];
       arr[j-i] = temp;
    }
    printf("Array after reverse : ");
    for(int i = 0 ; i < size ; i++){
        printf("%d ",arr[i]);
    }
}

void main(void){
    int size ;
    int arr[100];
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for(int i = 0 ; i < size ; i++){
        printf("Enter an  element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    reverse_array_in_place(arr , size);
}