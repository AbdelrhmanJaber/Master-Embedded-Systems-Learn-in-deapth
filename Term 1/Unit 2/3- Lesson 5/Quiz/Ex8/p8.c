#include<stdio.h>

int last_occurance(int arr[] ,int size ,  int num);

void main(void){
    int size , num , arr[100];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    for(int i = 0 ; i < size ; i++){
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the number you want to get its last occurance: ");
    scanf("%d",&num);
    printf("Last occurance is %d",last_occurance(arr ,size , num));
}


int last_occurance(int arr[] , int size , int num){
    int last = -1 ;
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == num) last = i+1;
    }
    return last;
}