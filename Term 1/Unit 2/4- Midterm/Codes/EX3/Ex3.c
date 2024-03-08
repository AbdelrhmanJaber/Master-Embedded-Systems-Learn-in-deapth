#include<stdio.h>

int get_prime(int num);

void main(void){
    int num1 , num2;
    printf("Enter two numbers (intervals) : ");
    scanf("%d %d",&num1 ,&num2);
    for(int i = num1 ; i<= num2 ; i++){
        if(get_prime(i)) printf("%d ",i);
    }
}   


int get_prime(int num){
    int flag = 1;
    for(int i = 2 ; i <= num/2 ; i++){
        if(num % i == 0) flag = 0;
    }
    return flag;
}