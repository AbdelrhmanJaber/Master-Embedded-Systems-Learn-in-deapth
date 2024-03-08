#include<stdio.h>

void main(void){
    int num;
    float sum = 0 , average;
    printf("Enter the number of data: ");
    scanf("%d",&num);
    float arr[num];
    for(int i = 0 ; i < num ; i++){
        printf("%d- Enter element number %d: ",i+1 , i);
        scanf("%f",&arr[i]);
    }

    for(int i = 0 ; i < num ; i++){
        sum+=arr[i];
    }
    average = sum / num;
    printf("Average = %0.2f",average);
}