#include<stdio.h>

void main(void){
    int numOfData , newElement , position ,  arr[100];
    printf("Enter number of elements : ");
    scanf("%d",&numOfData);
    
    for(int i = 0  ; i < numOfData ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter the new element you want: ");
    scanf("%d",&newElement);
    printf("Enter the location : ");
    scanf("%d",&position);
    
    /*shift the array*/
    for (int i = numOfData-1 ; i > 0 ; i--)
    {
        arr[i+1] = arr[i];   
    }
    /*insert new element*/
    arr[position-1] = newElement;

    for (int i = 0; i < numOfData+1 ; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
}