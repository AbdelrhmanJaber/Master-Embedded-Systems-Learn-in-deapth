#include<stdio.h>

void main(void){
    int numOfData , position , numberToSearch , flag = 0;
    printf("Enter number of elements : ");
    scanf("%d",&numOfData);
    int arr[numOfData];
    for(int i = 0 ; i < numOfData ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched : ");
    scanf("%d",&numberToSearch);
    
    for(int i = 0 ; i < numOfData ; i++){
        if(arr[i] == numberToSearch){
            printf("Number found at location %d\n",i+1);
            flag = 1;
            break;
        }
    }

    if(!flag){
        printf("the Number is not found at the array!\n");
    }
}