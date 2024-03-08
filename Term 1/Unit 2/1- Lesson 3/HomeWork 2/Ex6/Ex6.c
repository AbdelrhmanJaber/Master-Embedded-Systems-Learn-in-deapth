#include<stdio.h>

void main(void){
    int num , sum = 0; 
    printf("Enter an integer : ");
    scanf("%d",&num);
    for(int i = 0 ; i <= num ; i++){
        sum+=i;
    }
    printf("Sum = %d",sum);
}