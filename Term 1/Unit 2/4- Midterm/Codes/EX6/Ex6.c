#include<stdio.h>

void unique_number(int arr[] , int size);

void main(void){
    int arr[100] , size;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    for(int i = 0 ; i < size ; i++){
        scanf("%d",&arr[i]);
    }
    unique_number(arr , size);
}

void unique_number(int arr[] , int size){
    int count_array[size];
    for (int i = 0; i < size; i++)
    {
       count_array[i] = 0;
    }
    
    for(int i = 0 ; i < size ; i++){
        for(int j = 0 ; j < size ; j++){
            if(arr[i] == arr[j]) count_array[i]++;
        }
    }
    for(int i = 0 ; i < size ; i++){
        if(count_array[i] == 1){
            printf("%d ",arr[i]);
        }
    }
}